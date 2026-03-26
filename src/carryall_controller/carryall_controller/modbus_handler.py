"""
Modbus Handler for CarryAll AGV PLC Communication
Handles Modbus TCP connection to PLC for velocity commands and encoder feedback
"""

import logging
from typing import Optional, Tuple

try:
    from pymodbus.client import ModbusTcpClient
    from pymodbus.exceptions import ModbusException
except ImportError:
    logging.warning("pymodbus not installed. Using mock mode for development.")
    ModbusTcpClient = None
    ModbusException = Exception


class ModbusHandler:
    """
    Handles Modbus TCP communication with PLC
    Supports reading/writing holding registers for AGV control
    """
    
    def __init__(
        self,
        ip: str = "192.168.1.10",
        port: int = 502,
        timeout: float = 1.0,
        unit_id: int = 1
    ):
        self.ip = ip
        self.port = port
        self.timeout = timeout
        self.unit_id = unit_id
        self.client: Optional[ModbusTcpClient] = None
        self._connected = False
        self._logger = logging.getLogger(__name__)
        
    def connect(self) -> bool:
        """Establish connection to PLC"""
        if ModbusTcpClient is None:
            self._logger.warning("Modbus client not available (pymodbus not installed)")
            self._connected = False
            return False
            
        try:
            self.client = ModbusTcpClient(
                host=self.ip,
                port=self.port,
                timeout=self.timeout
            )
            self._connected = self.client.connect()
            if self._connected:
                self._logger.info(f"Connected to PLC at {self.ip}:{self.port}")
            else:
                self._logger.error(f"Failed to connect to PLC at {self.ip}:{self.port}")
            return self._connected
        except Exception as e:
            self._logger.error(f"Connection error: {e}")
            self._connected = False
            return False
    
    def disconnect(self):
        """Close connection to PLC"""
        if self.client and self._connected:
            self.client.close()
            self._connected = False
            self._logger.info("Disconnected from PLC")
    
    def is_connected(self) -> bool:
        """Check if connection is active"""
        if not self._connected or not self.client:
            return False
        return self.client.is_socket_open()
    
    def write_register(self, address: int, value: int) -> bool:
        """
        Write single holding register to PLC
        
        Args:
            address: Register address (0-based)
            value: Value to write (16-bit integer)
            
        Returns:
            True if successful, False otherwise
        """
        if not self.is_connected():
            self._logger.warning("Not connected to PLC, cannot write register")
            return False
            
        try:
            result = self.client.write_register(address, value, slave=self.unit_id)
            if result.isError():
                self._logger.error(f"Error writing register {address}: {result}")
                return False
            return True
        except ModbusException as e:
            self._logger.error(f"Modbus exception writing register {address}: {e}")
            return False
        except Exception as e:
            self._logger.error(f"Unexpected error writing register {address}: {e}")
            return False
    
    def write_registers(self, address: int, values: list) -> bool:
        """
        Write multiple holding registers
        
        Args:
            address: Starting register address
            values: List of values to write
            
        Returns:
            True if successful
        """
        if not self.is_connected():
            return False
            
        try:
            result = self.client.write_registers(address, values, slave=self.unit_id)
            if result.isError():
                self._logger.error(f"Error writing registers: {result}")
                return False
            return True
        except Exception as e:
            self._logger.error(f"Error writing registers: {e}")
            return False
    
    def read_holding_registers(self, address: int, count: int = 1) -> Optional[list]:
        """
        Read holding registers from PLC
        
        Args:
            address: Starting register address
            count: Number of registers to read
            
        Returns:
            List of register values or None if error
        """
        if not self.is_connected():
            self._logger.warning("Not connected to PLC, cannot read registers")
            return None
            
        try:
            result = self.client.read_holding_registers(address, count, slave=self.unit_id)
            if result.isError():
                self._logger.error(f"Error reading registers: {result}")
                return None
            return result.registers
        except ModbusException as e:
            self._logger.error(f"Modbus exception reading registers: {e}")
            return None
        except Exception as e:
            self._logger.error(f"Unexpected error reading registers: {e}")
            return None
    
    def read_input_registers(self, address: int, count: int = 1) -> Optional[list]:
        """
        Read input registers from PLC (read-only)
        
        Args:
            address: Starting register address
            count: Number of registers to read
            
        Returns:
            List of register values or None if error
        """
        if not self.is_connected():
            return None
            
        try:
            result = self.client.read_input_registers(address, count, slave=self.unit_id)
            if result.isError():
                return None
            return result.registers
        except Exception as e:
            self._logger.error(f"Error reading input registers: {e}")
            return None


class MockModbusHandler(ModbusHandler):
    """Mock handler for development/testing without physical PLC"""
    
    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)
        self._registers = {}
        self._logger.info("Using MOCK Modbus handler for development")
    
    def connect(self) -> bool:
        self._connected = True
        self._logger.info("MOCK: Connected to virtual PLC")
        return True
    
    def disconnect(self):
        self._connected = False
        self._logger.info("MOCK: Disconnected from virtual PLC")
    
    def is_connected(self) -> bool:
        return self._connected
    
    def write_register(self, address: int, value: int) -> bool:
        self._registers[address] = value
        self._logger.debug(f"MOCK: Wrote {value} to register {address}")
        return True
    
    def read_holding_registers(self, address: int, count: int = 1) -> Optional[list]:
        return [self._registers.get(address + i, 0) for i in range(count)]
