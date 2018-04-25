# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from spencer_vision_msgs/PersonROI.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import sensor_msgs.msg

class PersonROI(genpy.Message):
  _md5sum = "4484c510821bd11dbd7b6b3627d4e4ad"
  _type = "spencer_vision_msgs/PersonROI"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# Message describing a rectangular region of interest in a depth or RGB image containing a part of a person (e.g. head, face, full body...), which is usually encoded in the topic title
#

uint64          detection_id

sensor_msgs/RegionOfInterest    roi


================================================================================
MSG: sensor_msgs/RegionOfInterest
# This message is used to specify a region of interest within an image.
#
# When used to specify the ROI setting of the camera when the image was
# taken, the height and width fields should either match the height and
# width fields for the associated image; or height = width = 0
# indicates that the full resolution image was captured.

uint32 x_offset  # Leftmost pixel of the ROI
                 # (0 if the ROI includes the left edge of the image)
uint32 y_offset  # Topmost pixel of the ROI
                 # (0 if the ROI includes the top edge of the image)
uint32 height    # Height of ROI
uint32 width     # Width of ROI

# True if a distinct rectified ROI should be calculated from the "raw"
# ROI in this message. Typically this should be False if the full image
# is captured (ROI not used), and True if a subwindow is captured (ROI
# used).
bool do_rectify
"""
  __slots__ = ['detection_id','roi']
  _slot_types = ['uint64','sensor_msgs/RegionOfInterest']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       detection_id,roi

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(PersonROI, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.detection_id is None:
        self.detection_id = 0
      if self.roi is None:
        self.roi = sensor_msgs.msg.RegionOfInterest()
    else:
      self.detection_id = 0
      self.roi = sensor_msgs.msg.RegionOfInterest()

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
      buff.write(_get_struct_Q4IB().pack(_x.detection_id, _x.roi.x_offset, _x.roi.y_offset, _x.roi.height, _x.roi.width, _x.roi.do_rectify))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.roi is None:
        self.roi = sensor_msgs.msg.RegionOfInterest()
      end = 0
      _x = self
      start = end
      end += 25
      (_x.detection_id, _x.roi.x_offset, _x.roi.y_offset, _x.roi.height, _x.roi.width, _x.roi.do_rectify,) = _get_struct_Q4IB().unpack(str[start:end])
      self.roi.do_rectify = bool(self.roi.do_rectify)
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
      buff.write(_get_struct_Q4IB().pack(_x.detection_id, _x.roi.x_offset, _x.roi.y_offset, _x.roi.height, _x.roi.width, _x.roi.do_rectify))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.roi is None:
        self.roi = sensor_msgs.msg.RegionOfInterest()
      end = 0
      _x = self
      start = end
      end += 25
      (_x.detection_id, _x.roi.x_offset, _x.roi.y_offset, _x.roi.height, _x.roi.width, _x.roi.do_rectify,) = _get_struct_Q4IB().unpack(str[start:end])
      self.roi.do_rectify = bool(self.roi.do_rectify)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_Q4IB = None
def _get_struct_Q4IB():
    global _struct_Q4IB
    if _struct_Q4IB is None:
        _struct_Q4IB = struct.Struct("<Q4IB")
    return _struct_Q4IB
