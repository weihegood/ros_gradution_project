// Generated by gencpp from file rwth_perception_people_msgs/GroundHOGDetections.msg
// DO NOT EDIT!


#ifndef RWTH_PERCEPTION_PEOPLE_MSGS_MESSAGE_GROUNDHOGDETECTIONS_H
#define RWTH_PERCEPTION_PEOPLE_MSGS_MESSAGE_GROUNDHOGDETECTIONS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace rwth_perception_people_msgs
{
template <class ContainerAllocator>
struct GroundHOGDetections_
{
  typedef GroundHOGDetections_<ContainerAllocator> Type;

  GroundHOGDetections_()
    : header()
    , pos_x()
    , pos_y()
    , width()
    , height()
    , scale()
    , score()  {
    }
  GroundHOGDetections_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , pos_x(_alloc)
    , pos_y(_alloc)
    , width(_alloc)
    , height(_alloc)
    , scale(_alloc)
    , score(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other >  _pos_x_type;
  _pos_x_type pos_x;

   typedef std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other >  _pos_y_type;
  _pos_y_type pos_y;

   typedef std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other >  _width_type;
  _width_type width;

   typedef std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other >  _height_type;
  _height_type height;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _scale_type;
  _scale_type scale;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _score_type;
  _score_type score;





  typedef boost::shared_ptr< ::rwth_perception_people_msgs::GroundHOGDetections_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rwth_perception_people_msgs::GroundHOGDetections_<ContainerAllocator> const> ConstPtr;

}; // struct GroundHOGDetections_

typedef ::rwth_perception_people_msgs::GroundHOGDetections_<std::allocator<void> > GroundHOGDetections;

typedef boost::shared_ptr< ::rwth_perception_people_msgs::GroundHOGDetections > GroundHOGDetectionsPtr;
typedef boost::shared_ptr< ::rwth_perception_people_msgs::GroundHOGDetections const> GroundHOGDetectionsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rwth_perception_people_msgs::GroundHOGDetections_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rwth_perception_people_msgs::GroundHOGDetections_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rwth_perception_people_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'rwth_perception_people_msgs': ['/home/wwh/qqq/src/spencer_people_tracking/messages/rwth_perception_people_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rwth_perception_people_msgs::GroundHOGDetections_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rwth_perception_people_msgs::GroundHOGDetections_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rwth_perception_people_msgs::GroundHOGDetections_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rwth_perception_people_msgs::GroundHOGDetections_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rwth_perception_people_msgs::GroundHOGDetections_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rwth_perception_people_msgs::GroundHOGDetections_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rwth_perception_people_msgs::GroundHOGDetections_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e278dfbcb40304bacf23536a71084dab";
  }

  static const char* value(const ::rwth_perception_people_msgs::GroundHOGDetections_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe278dfbcb40304baULL;
  static const uint64_t static_value2 = 0xcf23536a71084dabULL;
};

template<class ContainerAllocator>
struct DataType< ::rwth_perception_people_msgs::GroundHOGDetections_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rwth_perception_people_msgs/GroundHOGDetections";
  }

  static const char* value(const ::rwth_perception_people_msgs::GroundHOGDetections_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rwth_perception_people_msgs::GroundHOGDetections_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
int64[] pos_x 	# upper left x corner of the bounding box\n\
int64[] pos_y 	# upper left y corner of the bounding box\n\
int64[] width 	# width of the bounding box\n\
int64[] height 	# height of the bounding box\n\
float64[] scale # scale of the detected object\n\
float64[] score # score of the detected object\n\
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
";
  }

  static const char* value(const ::rwth_perception_people_msgs::GroundHOGDetections_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rwth_perception_people_msgs::GroundHOGDetections_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.pos_x);
      stream.next(m.pos_y);
      stream.next(m.width);
      stream.next(m.height);
      stream.next(m.scale);
      stream.next(m.score);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GroundHOGDetections_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rwth_perception_people_msgs::GroundHOGDetections_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rwth_perception_people_msgs::GroundHOGDetections_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "pos_x[]" << std::endl;
    for (size_t i = 0; i < v.pos_x.size(); ++i)
    {
      s << indent << "  pos_x[" << i << "]: ";
      Printer<int64_t>::stream(s, indent + "  ", v.pos_x[i]);
    }
    s << indent << "pos_y[]" << std::endl;
    for (size_t i = 0; i < v.pos_y.size(); ++i)
    {
      s << indent << "  pos_y[" << i << "]: ";
      Printer<int64_t>::stream(s, indent + "  ", v.pos_y[i]);
    }
    s << indent << "width[]" << std::endl;
    for (size_t i = 0; i < v.width.size(); ++i)
    {
      s << indent << "  width[" << i << "]: ";
      Printer<int64_t>::stream(s, indent + "  ", v.width[i]);
    }
    s << indent << "height[]" << std::endl;
    for (size_t i = 0; i < v.height.size(); ++i)
    {
      s << indent << "  height[" << i << "]: ";
      Printer<int64_t>::stream(s, indent + "  ", v.height[i]);
    }
    s << indent << "scale[]" << std::endl;
    for (size_t i = 0; i < v.scale.size(); ++i)
    {
      s << indent << "  scale[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.scale[i]);
    }
    s << indent << "score[]" << std::endl;
    for (size_t i = 0; i < v.score.size(); ++i)
    {
      s << indent << "  score[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.score[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // RWTH_PERCEPTION_PEOPLE_MSGS_MESSAGE_GROUNDHOGDETECTIONS_H
