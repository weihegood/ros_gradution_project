// Generated by gencpp from file spencer_detected_person_association/LookupTrackIdsRequest.msg
// DO NOT EDIT!


#ifndef SPENCER_DETECTED_PERSON_ASSOCIATION_MESSAGE_LOOKUPTRACKIDSREQUEST_H
#define SPENCER_DETECTED_PERSON_ASSOCIATION_MESSAGE_LOOKUPTRACKIDSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace spencer_detected_person_association
{
template <class ContainerAllocator>
struct LookupTrackIdsRequest_
{
  typedef LookupTrackIdsRequest_<ContainerAllocator> Type;

  LookupTrackIdsRequest_()
    : detection_ids()  {
    }
  LookupTrackIdsRequest_(const ContainerAllocator& _alloc)
    : detection_ids(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<uint64_t, typename ContainerAllocator::template rebind<uint64_t>::other >  _detection_ids_type;
  _detection_ids_type detection_ids;





  typedef boost::shared_ptr< ::spencer_detected_person_association::LookupTrackIdsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spencer_detected_person_association::LookupTrackIdsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct LookupTrackIdsRequest_

typedef ::spencer_detected_person_association::LookupTrackIdsRequest_<std::allocator<void> > LookupTrackIdsRequest;

typedef boost::shared_ptr< ::spencer_detected_person_association::LookupTrackIdsRequest > LookupTrackIdsRequestPtr;
typedef boost::shared_ptr< ::spencer_detected_person_association::LookupTrackIdsRequest const> LookupTrackIdsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spencer_detected_person_association::LookupTrackIdsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spencer_detected_person_association::LookupTrackIdsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace spencer_detected_person_association

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::spencer_detected_person_association::LookupTrackIdsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spencer_detected_person_association::LookupTrackIdsRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_detected_person_association::LookupTrackIdsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_detected_person_association::LookupTrackIdsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_detected_person_association::LookupTrackIdsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_detected_person_association::LookupTrackIdsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spencer_detected_person_association::LookupTrackIdsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d5d9524ed74ef6a68fc08108b7e0df13";
  }

  static const char* value(const ::spencer_detected_person_association::LookupTrackIdsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd5d9524ed74ef6a6ULL;
  static const uint64_t static_value2 = 0x8fc08108b7e0df13ULL;
};

template<class ContainerAllocator>
struct DataType< ::spencer_detected_person_association::LookupTrackIdsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spencer_detected_person_association/LookupTrackIdsRequest";
  }

  static const char* value(const ::spencer_detected_person_association::LookupTrackIdsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spencer_detected_person_association::LookupTrackIdsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64[]      detection_ids\n\
";
  }

  static const char* value(const ::spencer_detected_person_association::LookupTrackIdsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spencer_detected_person_association::LookupTrackIdsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.detection_ids);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LookupTrackIdsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spencer_detected_person_association::LookupTrackIdsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spencer_detected_person_association::LookupTrackIdsRequest_<ContainerAllocator>& v)
  {
    s << indent << "detection_ids[]" << std::endl;
    for (size_t i = 0; i < v.detection_ids.size(); ++i)
    {
      s << indent << "  detection_ids[" << i << "]: ";
      Printer<uint64_t>::stream(s, indent + "  ", v.detection_ids[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPENCER_DETECTED_PERSON_ASSOCIATION_MESSAGE_LOOKUPTRACKIDSREQUEST_H