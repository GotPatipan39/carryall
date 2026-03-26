from setuptools import find_packages
from setuptools import setup

setup(
    name='hins_laser_interfaces',
    version='0.0.1',
    packages=find_packages(
        include=('hins_laser_interfaces', 'hins_laser_interfaces.*')),
)
