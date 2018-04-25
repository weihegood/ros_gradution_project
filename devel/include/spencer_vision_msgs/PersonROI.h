// Generated by gencpp from file spencer_vision_msgs/PersonROI.msg
// DO NOT EDIT!


#ifndef SPENCER_VISION_MSGS_MESSAGE_PERSONROI_H
#define SPENCER_VISION_MSGS_MESSAGE_PERSONROI_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <sensor_msgs/RegionOfInterest.h>

namespace spencer_vision_msgs
{
template <class ContainerAllocator>
struct PersonROI_
{
  typedef PersonROI_<ContainerAllocator> Type;

  PersonROI_()
    : detection_id(0)
    , roi()  {
    }
  PersonROI_(const ContainerAllocator& _alloc)
    : detection_id(0)
    , roi(_alloc)  {
  (void)_alloc;
    }



   typedef uint64_t _detection_id_type;
  _detection_id_type detection_id;

   typedef  ::sensor_msgs::RegionOfInterest_<ContainerAllocator>  _roi_type;
  _roi_type roi;





  typedef boost::shared_ptr< ::spencer_vision_msgs::PersonROI_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spencer_vision_msgs::PersonROI_<ContainerAllocator> const> ConstPtr;

}; // struct PersonROI_

typedef ::spencer_vision_msgs::PersonROI_<std::allocator<void> > PersonROI;

typedef boost::shared_ptr< ::spencer_vision_msgs::PersonROI > PersonROIPtr;
typedef boost::shared_ptr< ::spencer_vision_msgs::PersonROI const> PersonROIConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spencer_vision_msgs::PersonROI_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spencer_vision_msgs::PersonROI_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace spencer_vision_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'spencer_vision_msgs': ['/home/wwh/qqq/src/spencer_people_tracking/messages/spencer_vision_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::spencer_vision_msgs::PersonROI_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spencer_vision_msgs::PersonROI_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_vision_msgs::PersonROI_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_vision_msgs::PersonROI_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_vision_msgs::PersonROI_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_vision_msgs::PersonROI_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spencer_vision_msgs::PersonROI_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4484c510821bd11dbd7b6b3627d4e4ad";
  }

  static const char* value(const ::spencer_vision_msgs::PersonROI_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4484c510821bd11dULL;
  static const uint64_t static_value2 = 0xbd7b6b3627d4e4adULL;
};

template<class ContainerAllocator>
struct DataType< ::spencer_vision_msgs::PersonROI_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spencer_vision_msgs/PersonROI";
  }

  static const char* value(const ::spencer_vision_msgs::PersonROI_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spencer_vision_msgs::PersonROI_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Message describing a rectangular region of interest in a depth or RGB image containing a part of a person (e.g. head, face, full body...), which is usually encoded in the topic title\n\
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

  static const char* value(const ::spencer_vision_msgs::PersonROI_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spencer_vision_msgs::PersonROI_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.detection_id);
      stream.next(m.roi);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PersonROI_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spencer_vision_msgs::PersonROI_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spencer_vision_msgs::PersonROI_<ContainerAllocator>& v)
  {
    s << indent << "detection_id: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.detection_id);
    s << indent << "roi: ";
    s << std::endl;
    Printer< ::sensor_msgs::RegionOfInterest_<ContainerAllocator> >::stream(s, indent + "  ", v.roi);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPENCER_VISION_MSGS_MESSAGE_PERSONROI_H
