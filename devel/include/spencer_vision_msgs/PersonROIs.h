// Generated by gencpp from file spencer_vision_msgs/PersonROIs.msg
// DO NOT EDIT!


#ifndef SPENCER_VISION_MSGS_MESSAGE_PERSONROIS_H
#define SPENCER_VISION_MSGS_MESSAGE_PERSONROIS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <spencer_vision_msgs/PersonROI.h>

namespace spencer_vision_msgs
{
template <class ContainerAllocator>
struct PersonROIs_
{
  typedef PersonROIs_<ContainerAllocator> Type;

  PersonROIs_()
    : header()
    , rgb_topic()
    , depth_topic()
    , elements()  {
    }
  PersonROIs_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , rgb_topic(_alloc)
    , depth_topic(_alloc)
    , elements(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _rgb_topic_type;
  _rgb_topic_type rgb_topic;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _depth_topic_type;
  _depth_topic_type depth_topic;

   typedef std::vector< ::spencer_vision_msgs::PersonROI_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::spencer_vision_msgs::PersonROI_<ContainerAllocator> >::other >  _elements_type;
  _elements_type elements;





  typedef boost::shared_ptr< ::spencer_vision_msgs::PersonROIs_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spencer_vision_msgs::PersonROIs_<ContainerAllocator> const> ConstPtr;

}; // struct PersonROIs_

typedef ::spencer_vision_msgs::PersonROIs_<std::allocator<void> > PersonROIs;

typedef boost::shared_ptr< ::spencer_vision_msgs::PersonROIs > PersonROIsPtr;
typedef boost::shared_ptr< ::spencer_vision_msgs::PersonROIs const> PersonROIsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spencer_vision_msgs::PersonROIs_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spencer_vision_msgs::PersonROIs_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace spencer_vision_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'spencer_vision_msgs': ['/home/wwh/qqq/src/spencer_people_tracking/messages/spencer_vision_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::spencer_vision_msgs::PersonROIs_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spencer_vision_msgs::PersonROIs_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_vision_msgs::PersonROIs_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_vision_msgs::PersonROIs_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_vision_msgs::PersonROIs_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_vision_msgs::PersonROIs_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spencer_vision_msgs::PersonROIs_<ContainerAllocator> >
{
  static const char* value()
  {
    return "39d733db5b2ece3bd129f8a360116d23";
  }

  static const char* value(const ::spencer_vision_msgs::PersonROIs_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x39d733db5b2ece3bULL;
  static const uint64_t static_value2 = 0xd129f8a360116d23ULL;
};

template<class ContainerAllocator>
struct DataType< ::spencer_vision_msgs::PersonROIs_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spencer_vision_msgs/PersonROIs";
  }

  static const char* value(const ::spencer_vision_msgs::PersonROIs_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spencer_vision_msgs::PersonROIs_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Message describing an array of rectangular regions of interest in a depth or RGB image containing a part of a person (e.g. head, face, full body...), which is usually encoded in the topic title\n\
#\n\
\n\
std_msgs/Header     header\n\
\n\
string              rgb_topic       # not necessarily the raw camera output; might be preprocessed for rectification etc.\n\
string              depth_topic     # might not be set if depth is not available, otherwise it is the registered depth image\n\
\n\
PersonROI[]         elements\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: spencer_vision_msgs/PersonROI\n\
# Message describing a rectangular region of interest in a depth or RGB image containing a part of a person (e.g. head, face, full body...), which is usually encoded in the topic title\n\
#\n\
\n\
uint64          detection_id\n\
\n\
sensor_msgs/RegionOfInterest    roi\n\
\n\
\n\
================================================================================\n\
MSG: sensor_msgs/RegionOfInterest\n\
# This message is used to specify a region of interest within an image.\n\
#\n\
# When used to specify the ROI setting of the camera when the image was\n\
# taken, the height and width fields should either match the height and\n\
# width fields for the associated image; or height = width = 0\n\
# indicates that the full resolution image was captured.\n\
\n\
uint32 x_offset  # Leftmost pixel of the ROI\n\
                 # (0 if the ROI includes the left edge of the image)\n\
uint32 y_offset  # Topmost pixel of the ROI\n\
                 # (0 if the ROI includes the top edge of the image)\n\
uint32 height    # Height of ROI\n\
uint32 width     # Width of ROI\n\
\n\
# True if a distinct rectified ROI should be calculated from the \"raw\"\n\
# ROI in this message. Typically this should be False if the full image\n\
# is captured (ROI not used), and True if a subwindow is captured (ROI\n\
# used).\n\
bool do_rectify\n\
";
  }

  static const char* value(const ::spencer_vision_msgs::PersonROIs_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spencer_vision_msgs::PersonROIs_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.rgb_topic);
      stream.next(m.depth_topic);
      stream.next(m.elements);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PersonROIs_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spencer_vision_msgs::PersonROIs_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spencer_vision_msgs::PersonROIs_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "rgb_topic: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.rgb_topic);
    s << indent << "depth_topic: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.depth_topic);
    s << indent << "elements[]" << std::endl;
    for (size_t i = 0; i < v.elements.size(); ++i)
    {
      s << indent << "  elements[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::spencer_vision_msgs::PersonROI_<ContainerAllocator> >::stream(s, indent + "    ", v.elements[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPENCER_VISION_MSGS_MESSAGE_PERSONROIS_H
