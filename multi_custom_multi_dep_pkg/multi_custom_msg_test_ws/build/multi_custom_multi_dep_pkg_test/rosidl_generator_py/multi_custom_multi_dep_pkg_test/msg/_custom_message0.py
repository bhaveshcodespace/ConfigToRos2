# generated from rosidl_generator_py/resource/_idl.py.em
# with input from multi_custom_multi_dep_pkg_test:msg/CustomMessage0.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CustomMessage0(type):
    """Metaclass of message 'CustomMessage0'."""

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
            module = import_type_support('multi_custom_multi_dep_pkg_test')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'multi_custom_multi_dep_pkg_test.msg.CustomMessage0')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__custom_message0
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__custom_message0
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__custom_message0
            cls._TYPE_SUPPORT = module.type_support_msg__msg__custom_message0
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__custom_message0

            from sensor_msgs.msg import Imu
            if Imu.__class__._TYPE_SUPPORT is None:
                Imu.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CustomMessage0(metaclass=Metaclass_CustomMessage0):
    """Message class 'CustomMessage0'."""

    __slots__ = [
        '_num',
        '_message',
        '_imu_data',
    ]

    _fields_and_field_types = {
        'num': 'int32',
        'message': 'string',
        'imu_data': 'sensor_msgs/Imu',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Imu'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.num = kwargs.get('num', int())
        self.message = kwargs.get('message', str())
        from sensor_msgs.msg import Imu
        self.imu_data = kwargs.get('imu_data', Imu())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.num != other.num:
            return False
        if self.message != other.message:
            return False
        if self.imu_data != other.imu_data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def num(self):
        """Message field 'num'."""
        return self._num

    @num.setter
    def num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'num' field must be an integer in [-2147483648, 2147483647]"
        self._num = value

    @property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value

    @property
    def imu_data(self):
        """Message field 'imu_data'."""
        return self._imu_data

    @imu_data.setter
    def imu_data(self, value):
        if __debug__:
            from sensor_msgs.msg import Imu
            assert \
                isinstance(value, Imu), \
                "The 'imu_data' field must be a sub message of type 'Imu'"
        self._imu_data = value
