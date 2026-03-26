# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hins_laser_interfaces:msg/HinsMsg.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HinsMsg(type):
    """Metaclass of message 'HinsMsg'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('hins_laser_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hins_laser_interfaces.msg.HinsMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__hins_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__hins_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__hins_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__hins_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__hins_msg

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HinsMsg(metaclass=Metaclass_HinsMsg):
    """Message class 'HinsMsg'."""

    __slots__ = [
        '_area1',
        '_area2',
        '_area3',
        '_success',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'area1': 'boolean',
        'area2': 'boolean',
        'area3': 'boolean',
        'success': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.area1 = kwargs.get('area1', bool())
        self.area2 = kwargs.get('area2', bool())
        self.area3 = kwargs.get('area3', bool())
        self.success = kwargs.get('success', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.area1 != other.area1:
            return False
        if self.area2 != other.area2:
            return False
        if self.area3 != other.area3:
            return False
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def area1(self):
        """Message field 'area1'."""
        return self._area1

    @area1.setter
    def area1(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'area1' field must be of type 'bool'"
        self._area1 = value

    @builtins.property
    def area2(self):
        """Message field 'area2'."""
        return self._area2

    @area2.setter
    def area2(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'area2' field must be of type 'bool'"
        self._area2 = value

    @builtins.property
    def area3(self):
        """Message field 'area3'."""
        return self._area3

    @area3.setter
    def area3(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'area3' field must be of type 'bool'"
        self._area3 = value

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value
