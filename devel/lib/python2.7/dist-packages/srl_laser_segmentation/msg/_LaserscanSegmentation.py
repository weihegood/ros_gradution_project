# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from srl_laser_segmentation/LaserscanSegmentation.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import srl_laser_segmentation.msg
import std_msgs.msg

class LaserscanSegmentation(genpy.Message):
  _md5sum = "4220e7e74ca923add2cd78d176946e12"
  _type = "srl_laser_segmentation/LaserscanSegmentation"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """# A LaserscanSegmentation divides the points of a sensor_msgs/Laserscan into segments of (usually neighbouring)
# points. Each segment is assigned a label, which uniquely identifies the segment. Laserscan points that
# are considered as scene background are not part of any segment.
# LaserscanSegmentation messages can be used as an input to a classifier such as a person detector, or for annotating
# sensor_msgs/Laserscan messages with groundtruth person tracks (in that case, a segment's label denotes a person track ID,
# that is used consistently across multiple frames).

# Standard message header
# The timestamp of this header must be equal to the timestamp of the corresponding Laserscan message,
# and can thus be used for synchronization of Laserscan and LaserscanSegmentation messages.
std_msgs/Header     header

# All segments of interest of the current laser scan. Anything that is not part of a LaserscanSegment is
# implicitly defined as scene background. 
LaserscanSegment[]  segments
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
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: srl_laser_segmentation/LaserscanSegment
# The segment label assigned to this set of laser points, usually unique per sensor_msgs/Laserscan.
# If the LaserscanSegmentation message is used to annotate groundtruth person tracks, each label
# corresponds to the ID of a tracked person.
# Note that laser points which are considered as background are not part of any LaserscanSegment!
int16       label

# Indices of the measurements in the sensor_msgs/Laserscan ranges[] and intensities[] arrays
# that are part of this segment. For example, if measurement_indices contains the values
# 0, 1 and 2 and the value of 'label' is 16, then the first three laser measurements (usually the
# three left-most laser points in polar coordinates) are assigned to segment 16.
uint16[]    measurement_indices"""
  __slots__ = ['header','segments']
  _slot_types = ['std_msgs/Header','srl_laser_segmentation/LaserscanSegment[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,segments

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(LaserscanSegmentation, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.segments is None:
        self.segments = []
    else:
      self.header = std_msgs.msg.Header()
      self.segments = []

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
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.segments)
      buff.write(_struct_I.pack(length))
      for val1 in self.segments:
        buff.write(_get_struct_h().pack(val1.label))
        length = len(val1.measurement_indices)
        buff.write(_struct_I.pack(length))
        pattern = '<%sH'%length
        buff.write(struct.pack(pattern, *val1.measurement_indices))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.segments is None:
        self.segments = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.segments = []
      for i in range(0, length):
        val1 = srl_laser_segmentation.msg.LaserscanSegment()
        start = end
        end += 2
        (val1.label,) = _get_struct_h().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sH'%length
        start = end
        end += struct.calcsize(pattern)
        val1.measurement_indices = struct.unpack(pattern, str[start:end])
        self.segments.append(val1)
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
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.segments)
      buff.write(_struct_I.pack(length))
      for val1 in self.segments:
        buff.write(_get_struct_h().pack(val1.label))
        length = len(val1.measurement_indices)
        buff.write(_struct_I.pack(length))
        pattern = '<%sH'%length
        buff.write(val1.measurement_indices.tostring())
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.segments is None:
        self.segments = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.segments = []
      for i in range(0, length):
        val1 = srl_laser_segmentation.msg.LaserscanSegment()
        start = end
        end += 2
        (val1.label,) = _get_struct_h().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sH'%length
        start = end
        end += struct.calcsize(pattern)
        val1.measurement_indices = numpy.frombuffer(str[start:end], dtype=numpy.uint16, count=length)
        self.segments.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_h = None
def _get_struct_h():
    global _struct_h
    if _struct_h is None:
        _struct_h = struct.Struct("<h")
    return _struct_h
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
