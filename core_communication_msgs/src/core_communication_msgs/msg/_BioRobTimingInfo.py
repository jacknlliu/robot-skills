"""autogenerated by genpy from core_communication_msgs/BioRobTimingInfo.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class BioRobTimingInfo(genpy.Message):
  _md5sum = "084b989d61a3c81043143a886f388f82"
  _type = "core_communication_msgs/BioRobTimingInfo"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """uint64 timestamp_nsec
uint64 timestamp_delta_nsec
float64 timestamp_second
float64 timestamp_delta_second

"""
  __slots__ = ['timestamp_nsec','timestamp_delta_nsec','timestamp_second','timestamp_delta_second']
  _slot_types = ['uint64','uint64','float64','float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       timestamp_nsec,timestamp_delta_nsec,timestamp_second,timestamp_delta_second

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(BioRobTimingInfo, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.timestamp_nsec is None:
        self.timestamp_nsec = 0
      if self.timestamp_delta_nsec is None:
        self.timestamp_delta_nsec = 0
      if self.timestamp_second is None:
        self.timestamp_second = 0.
      if self.timestamp_delta_second is None:
        self.timestamp_delta_second = 0.
    else:
      self.timestamp_nsec = 0
      self.timestamp_delta_nsec = 0
      self.timestamp_second = 0.
      self.timestamp_delta_second = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_2Q2d.pack(_x.timestamp_nsec, _x.timestamp_delta_nsec, _x.timestamp_second, _x.timestamp_delta_second))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 32
      (_x.timestamp_nsec, _x.timestamp_delta_nsec, _x.timestamp_second, _x.timestamp_delta_second,) = _struct_2Q2d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_2Q2d.pack(_x.timestamp_nsec, _x.timestamp_delta_nsec, _x.timestamp_second, _x.timestamp_delta_second))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 32
      (_x.timestamp_nsec, _x.timestamp_delta_nsec, _x.timestamp_second, _x.timestamp_delta_second,) = _struct_2Q2d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_2Q2d = struct.Struct("<2Q2d")
