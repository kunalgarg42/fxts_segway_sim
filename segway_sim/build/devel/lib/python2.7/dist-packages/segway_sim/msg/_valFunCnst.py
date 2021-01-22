# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from segway_sim/valFunCnst.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class valFunCnst(genpy.Message):
  _md5sum = "1e574332a926b29e85d7fb4e82e20fdd"
  _type = "segway_sim/valFunCnst"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """uint8 status
Header header
float64 x1
float64 y1
float64 c1
float64 x2
float64 y2
float64 c2
float64 x3
float64 y3
float64 c3
float64 xmin
float64 xmax
float64 ymin
float64 ymax
float64 highLevTime
float64 term_xmin
float64 term_xmax
float64 term_ymin
float64 term_ymax

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
  __slots__ = ['status','header','x1','y1','c1','x2','y2','c2','x3','y3','c3','xmin','xmax','ymin','ymax','highLevTime','term_xmin','term_xmax','term_ymin','term_ymax']
  _slot_types = ['uint8','std_msgs/Header','float64','float64','float64','float64','float64','float64','float64','float64','float64','float64','float64','float64','float64','float64','float64','float64','float64','float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       status,header,x1,y1,c1,x2,y2,c2,x3,y3,c3,xmin,xmax,ymin,ymax,highLevTime,term_xmin,term_xmax,term_ymin,term_ymax

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(valFunCnst, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.status is None:
        self.status = 0
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.x1 is None:
        self.x1 = 0.
      if self.y1 is None:
        self.y1 = 0.
      if self.c1 is None:
        self.c1 = 0.
      if self.x2 is None:
        self.x2 = 0.
      if self.y2 is None:
        self.y2 = 0.
      if self.c2 is None:
        self.c2 = 0.
      if self.x3 is None:
        self.x3 = 0.
      if self.y3 is None:
        self.y3 = 0.
      if self.c3 is None:
        self.c3 = 0.
      if self.xmin is None:
        self.xmin = 0.
      if self.xmax is None:
        self.xmax = 0.
      if self.ymin is None:
        self.ymin = 0.
      if self.ymax is None:
        self.ymax = 0.
      if self.highLevTime is None:
        self.highLevTime = 0.
      if self.term_xmin is None:
        self.term_xmin = 0.
      if self.term_xmax is None:
        self.term_xmax = 0.
      if self.term_ymin is None:
        self.term_ymin = 0.
      if self.term_ymax is None:
        self.term_ymax = 0.
    else:
      self.status = 0
      self.header = std_msgs.msg.Header()
      self.x1 = 0.
      self.y1 = 0.
      self.c1 = 0.
      self.x2 = 0.
      self.y2 = 0.
      self.c2 = 0.
      self.x3 = 0.
      self.y3 = 0.
      self.c3 = 0.
      self.xmin = 0.
      self.xmax = 0.
      self.ymin = 0.
      self.ymax = 0.
      self.highLevTime = 0.
      self.term_xmin = 0.
      self.term_xmax = 0.
      self.term_ymin = 0.
      self.term_ymax = 0.

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
      _x = self
      buff.write(_get_struct_18d().pack(_x.x1, _x.y1, _x.c1, _x.x2, _x.y2, _x.c2, _x.x3, _x.y3, _x.c3, _x.xmin, _x.xmax, _x.ymin, _x.ymax, _x.highLevTime, _x.term_xmin, _x.term_xmax, _x.term_ymin, _x.term_ymax))
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
      _x = self
      start = end
      end += 144
      (_x.x1, _x.y1, _x.c1, _x.x2, _x.y2, _x.c2, _x.x3, _x.y3, _x.c3, _x.xmin, _x.xmax, _x.ymin, _x.ymax, _x.highLevTime, _x.term_xmin, _x.term_xmax, _x.term_ymin, _x.term_ymax,) = _get_struct_18d().unpack(str[start:end])
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
      _x = self
      buff.write(_get_struct_18d().pack(_x.x1, _x.y1, _x.c1, _x.x2, _x.y2, _x.c2, _x.x3, _x.y3, _x.c3, _x.xmin, _x.xmax, _x.ymin, _x.ymax, _x.highLevTime, _x.term_xmin, _x.term_xmax, _x.term_ymin, _x.term_ymax))
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
      _x = self
      start = end
      end += 144
      (_x.x1, _x.y1, _x.c1, _x.x2, _x.y2, _x.c2, _x.x3, _x.y3, _x.c3, _x.xmin, _x.xmax, _x.ymin, _x.ymax, _x.highLevTime, _x.term_xmin, _x.term_xmax, _x.term_ymin, _x.term_ymax,) = _get_struct_18d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_18d = None
def _get_struct_18d():
    global _struct_18d
    if _struct_18d is None:
        _struct_18d = struct.Struct("<18d")
    return _struct_18d
_struct_B3I = None
def _get_struct_B3I():
    global _struct_B3I
    if _struct_B3I is None:
        _struct_B3I = struct.Struct("<B3I")
    return _struct_B3I
