// Generated by gencpp from file rwth_perception_people_msgs/GroundPlane.msg
// DO NOT EDIT!


#ifndef RWTH_PERCEPTION_PEOPLE_MSGS_MESSAGE_GROUNDPLANE_H
#define RWTH_PERCEPTION_PEOPLE_MSGS_MESSAGE_GROUNDPLANE_H


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
struct GroundPlane_
{
  typedef GroundPlane_<ContainerAllocator> Type;

  GroundPlane_()
    : header()
    , n()
    , d(0.0)  {
    }
  GroundPlane_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , n(_alloc)
    , d(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _n_type;
  _n_type n;

   typedef double _d_type;
  _d_type d;





  typedef boost::shared_ptr< ::rwth_perception_people_msgs::GroundPlane_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rwth_perception_people_msgs::GroundPlane_<ContainerAllocator> const> ConstPtr;

}; // struct GroundPlane_

typedef ::rwth_perception_people_msgs::GroundPlane_<std::allocator<void> > GroundPlane;

typedef boost::shared_ptr< ::rwth_perception_people_msgs::GroundPlane > GroundPlanePtr;
typedef boost::shared_ptr< ::rwth_perception_people_msgs::GroundPlane const> GroundPlaneConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rwth_perception_people_msgs::GroundPlane_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rwth_perception_people_msgs::GroundPlane_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::rwth_perception_people_msgs::GroundPlane_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rwth_perception_people_msgs::GroundPlane_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rwth_perception_people_msgs::GroundPlane_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rwth_perception_people_msgs::GroundPlane_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rwth_perception_people_msgs::GroundPlane_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rwth_perception_people_msgs::GroundPlane_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rwth_perception_people_msgs::GroundPlane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "304eb2260bc88a91236784c7dd166ffd";
  }

  static const char* value(const ::rwth_perception_people_msgs::GroundPlane_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x304eb2260bc88a91ULL;
  static const uint64_t static_value2 = 0x236784c7dd166ffdULL;
};

template<class ContainerAllocator>
struct DataType< ::rwth_perception_people_msgs::GroundPlane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rwth_perception_people_msgs/GroundPlane";
  }

  static const char* value(const ::rwth_perception_people_msgs::GroundPlane_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rwth_perception_people_msgs::GroundPlane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
float64[] n 	# 3x1 vector containing the normal of the ground plane\n\
float64   d     # d is the ditance ax+by+cz = d\n\
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

  static const char* value(const ::rwth_perception_people_msgs::GroundPlane_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rwth_perception_people_msgs::GroundPlane_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.n);
      stream.next(m.d);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GroundPlane_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rwth_perception_people_msgs::GroundPlane_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rwth_perception_people_msgs::GroundPlane_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "n[]" << std::endl;
    for (size_t i = 0; i < v.n.size(); ++i)
    {
      s << indent << "  n[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.n[i]);
    }
    s << indent << "d: ";
    Printer<double>::stream(s, indent + "  ", v.d);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RWTH_PERCEPTION_PEOPLE_MSGS_MESSAGE_GROUNDPLANE_H
