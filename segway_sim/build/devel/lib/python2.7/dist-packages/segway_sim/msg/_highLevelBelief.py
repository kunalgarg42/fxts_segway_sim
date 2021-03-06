# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from segway_sim/highLevelBelief.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class highLevelBelief(genpy.Message):
  _md5sum = "40f96d12b2895b791f2b4d422fdc68d0"
  _type = "segway_sim/highLevelBelief"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """uint8 status
Header header
float64 probMiss
float64[40] bt
float64[20] prob
float64[2] targetPosDrone
float64[2] targetPosSegway

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id
"""
  __slots__ = ['status','header','probMiss','bt','prob','targetPosDrone','targetPosSegway']
  _slot_types = ['uint8','std_msgs/Header','float64','float64[40]','float64[20]','float64[2]','float64[2]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       status,header,probMiss,bt,prob,targetPosDrone,targetPosSegway

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(highLevelBelief, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.status is None:
        self.status = 0
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.probMiss is None:
        self.probMiss = 0.
      if self.bt is None:
        self.bt = [0.] * 40
      if self.prob is None:
        self.prob = [0.] * 20
      if self.targetPosDrone is None:
        self.targetPosDrone = [0.] * 2
      if self.targetPosSegway is None:
        self.targetPosSegway = [0.] * 2
    else:
      self.status = 0
      self.header = std_msgs.msg.Header()
      self.probMiss = 0.
      self.bt = [0.] * 40
      self.prob = [0.] * 20
      self.targetPosDrone = [0.] * 2
      self.targetPosSegway = [0.] * 2

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
      buff.write(_get_struct_B3I().pack(_x.status, _x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.probMiss
      buff.write(_get_struct_d().pack(_x))
      buff.write(_get_struct_40d().pack(*self.bt))
      buff.write(_get_struct_20d().pack(*self.prob))
      buff.write(_get_struct_2d().pack(*self.targetPosDrone))
      buff.write(_get_struct_2d().pack(*self.targetPosSegway))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 13
      (_x.status, _x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_B3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 8
      (self.probMiss,) = _get_struct_d().unpack(str[start:end])
      start = end
      end += 320
      self.bt = _get_struct_40d().unpack(str[start:end])
      start = end
      end += 160
      self.prob = _get_struct_20d().unpack(str[start:end])
      start = end
      end += 16
      self.targetPosDrone = _get_struct_2d().unpack(str[start:end])
      start = end
      end += 16
      self.targetPosSegway = _get_struct_2d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_B3I().pack(_x.status, _x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.probMiss
      buff.write(_get_struct_d().pack(_x))
      buff.write(self.bt.tostring())
      buff.write(self.prob.tostring())
      buff.write(self.targetPosDrone.tostring())
      buff.write(self.targetPosSegway.tostring())
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 13
      (_x.status, _x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_B3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 8
      (self.probMiss,) = _get_struct_d().unpack(str[start:end])
      start = end
      end += 320
      self.bt = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=40)
      start = end
      end += 160
      self.prob = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=20)
      start = end
      end += 16
      self.targetPosDrone = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=2)
      start = end
      end += 16
      self.targetPosSegway = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=2)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_20d = None
def _get_struct_20d():
    global _struct_20d
    if _struct_20d is None:
        _struct_20d = struct.Struct("<20d")
    return _struct_20d
_struct_2d = None
def _get_struct_2d():
    global _struct_2d
    if _struct_2d is None:
        _struct_2d = struct.Struct("<2d")
    return _struct_2d
_struct_40d = None
def _get_struct_40d():
    global _struct_40d
    if _struct_40d is None:
        _struct_40d = struct.Struct("<40d")
    return _struct_40d
_struct_B3I = None
def _get_struct_B3I():
    global _struct_B3I
    if _struct_B3I is None:
        _struct_B3I = struct.Struct("<B3I")
    return _struct_B3I
_struct_d = None
def _get_struct_d():
    global _struct_d
    if _struct_d is None:
        _struct_d = struct.Struct("<d")
    return _struct_d
