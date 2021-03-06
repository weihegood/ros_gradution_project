// Generated by gencpp from file actor_services/SetPoseResponse.msg
// DO NOT EDIT!


#ifndef ACTOR_SERVICES_MESSAGE_SETPOSERESPONSE_H
#define ACTOR_SERVICES_MESSAGE_SETPOSERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace actor_services
{
template <class ContainerAllocator>
struct SetPoseResponse_
{
  typedef SetPoseResponse_<ContainerAllocator> Type;

  SetPoseResponse_()
    : x(0.0)
    , y(0.0)  {
    }
  SetPoseResponse_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)  {
  (void)_alloc;
    }



   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;





  typedef boost::shared_ptr< ::actor_services::SetPoseResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::actor_services::SetPoseResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetPoseResponse_

typedef ::actor_services::SetPoseResponse_<std::allocator<void> > SetPoseResponse;

typedef boost::shared_ptr< ::actor_services::SetPoseResponse > SetPoseResponsePtr;
typedef boost::shared_ptr< ::actor_services::SetPoseResponse const> SetPoseResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::actor_services::SetPoseResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::actor_services::SetPoseResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace actor_services

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::actor_services::SetPoseResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::actor_services::SetPoseResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::actor_services::SetPoseResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::actor_services::SetPoseResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::actor_services::SetPoseResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::actor_services::SetPoseResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::actor_services::SetPoseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "209f516d3eb691f0663e25cb750d67c1";
  }

  static const char* value(const ::actor_services::SetPoseResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x209f516d3eb691f0ULL;
  static const uint64_t static_value2 = 0x663e25cb750d67c1ULL;
};

template<class ContainerAllocator>
struct DataType< ::actor_services::SetPoseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "actor_services/SetPoseResponse";
  }

  static const char* value(const ::actor_services::SetPoseResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::actor_services::SetPoseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 x\n\
float64 y\n\
\n\
";
  }

  static const char* value(const ::actor_services::SetPoseResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::actor_services::SetPoseResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetPoseResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::actor_services::SetPoseResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::actor_services::SetPoseResponse_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ACTOR_SERVICES_MESSAGE_SETPOSERESPONSE_H
