// Generated by gencpp from file spencer_human_attribute_msgs/CategoricalAttribute.msg
// DO NOT EDIT!


#ifndef SPENCER_HUMAN_ATTRIBUTE_MSGS_MESSAGE_CATEGORICALATTRIBUTE_H
#define SPENCER_HUMAN_ATTRIBUTE_MSGS_MESSAGE_CATEGORICALATTRIBUTE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace spencer_human_attribute_msgs
{
template <class ContainerAllocator>
struct CategoricalAttribute_
{
  typedef CategoricalAttribute_<ContainerAllocator> Type;

  CategoricalAttribute_()
    : subject_id(0)
    , type()
    , values()
    , confidences()  {
    }
  CategoricalAttribute_(const ContainerAllocator& _alloc)
    : subject_id(0)
    , type(_alloc)
    , values(_alloc)
    , confidences(_alloc)  {
  (void)_alloc;
    }



   typedef uint64_t _subject_id_type;
  _subject_id_type subject_id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _type_type;
  _type_type type;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _values_type;
  _values_type values;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _confidences_type;
  _confidences_type confidences;




  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  GENDER;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  AGE_GROUP;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  GENDER_MALE;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  GENDER_FEMALE;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  AGE_GROUP_0_TO_2;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  AGE_GROUP_3_TO_7;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  AGE_GROUP_8_TO_12;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  AGE_GROUP_13_TO_19;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  AGE_GROUP_20_TO_36;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  AGE_GROUP_37_TO_65;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  AGE_GROUP_66_TO_99;

  typedef boost::shared_ptr< ::spencer_human_attribute_msgs::CategoricalAttribute_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spencer_human_attribute_msgs::CategoricalAttribute_<ContainerAllocator> const> ConstPtr;

}; // struct CategoricalAttribute_

typedef ::spencer_human_attribute_msgs::CategoricalAttribute_<std::allocator<void> > CategoricalAttribute;

typedef boost::shared_ptr< ::spencer_human_attribute_msgs::CategoricalAttribute > CategoricalAttributePtr;
typedef boost::shared_ptr< ::spencer_human_attribute_msgs::CategoricalAttribute const> CategoricalAttributeConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      CategoricalAttribute_<ContainerAllocator>::GENDER =
        
          "gender"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      CategoricalAttribute_<ContainerAllocator>::AGE_GROUP =
        
          "age_group"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      CategoricalAttribute_<ContainerAllocator>::GENDER_MALE =
        
          "male"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      CategoricalAttribute_<ContainerAllocator>::GENDER_FEMALE =
        
          "female"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      CategoricalAttribute_<ContainerAllocator>::AGE_GROUP_0_TO_2 =
        
          "0-2"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      CategoricalAttribute_<ContainerAllocator>::AGE_GROUP_3_TO_7 =
        
          "3-7"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      CategoricalAttribute_<ContainerAllocator>::AGE_GROUP_8_TO_12 =
        
          "8-12"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      CategoricalAttribute_<ContainerAllocator>::AGE_GROUP_13_TO_19 =
        
          "13-19"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      CategoricalAttribute_<ContainerAllocator>::AGE_GROUP_20_TO_36 =
        
          "20-36"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      CategoricalAttribute_<ContainerAllocator>::AGE_GROUP_37_TO_65 =
        
          "37-65"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      CategoricalAttribute_<ContainerAllocator>::AGE_GROUP_66_TO_99 =
        
          "66-99"
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spencer_human_attribute_msgs::CategoricalAttribute_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spencer_human_attribute_msgs::CategoricalAttribute_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace spencer_human_attribute_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'spencer_human_attribute_msgs': ['/home/wwh/qqq/src/spencer_people_tracking/messages/spencer_human_attribute_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::spencer_human_attribute_msgs::CategoricalAttribute_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spencer_human_attribute_msgs::CategoricalAttribute_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_human_attribute_msgs::CategoricalAttribute_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_human_attribute_msgs::CategoricalAttribute_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_human_attribute_msgs::CategoricalAttribute_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_human_attribute_msgs::CategoricalAttribute_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spencer_human_attribute_msgs::CategoricalAttribute_<ContainerAllocator> >
{
  static const char* value()
  {
    return "022dc607a1c6f3404ecf625be18f25f5";
  }

  static const char* value(const ::spencer_human_attribute_msgs::CategoricalAttribute_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x022dc607a1c6f340ULL;
  static const uint64_t static_value2 = 0x4ecf625be18f25f5ULL;
};

template<class ContainerAllocator>
struct DataType< ::spencer_human_attribute_msgs::CategoricalAttribute_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spencer_human_attribute_msgs/CategoricalAttribute";
  }

  static const char* value(const ::spencer_human_attribute_msgs::CategoricalAttribute_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spencer_human_attribute_msgs::CategoricalAttribute_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64                  subject_id              # either an observation ID or a track ID (if information has been integrated over time); should be encoded in topic name\n\
string                  type                    # type of the attribute, see constants below\n\
\n\
string[]                values                  # values, each value also should have a confidence, highest-confidence attribute should come first\n\
float32[]               confidences             # corresponding confidences should sum up to 1.0, highest confidence comes first\n\
\n\
\n\
##################################################\n\
### Constants for categorical attribute types. ###\n\
##################################################\n\
\n\
string      GENDER        = gender\n\
string      AGE_GROUP     = age_group\n\
\n\
###################################################\n\
### Constants for categorical attribute values. ###\n\
###################################################\n\
\n\
string      GENDER_MALE             = male\n\
string      GENDER_FEMALE           = female\n\
\n\
# Age groups are based upon the categories from the \"Images Of Groups\" RGB database\n\
string      AGE_GROUP_0_TO_2        = 0-2\n\
string      AGE_GROUP_3_TO_7        = 3-7\n\
string      AGE_GROUP_8_TO_12       = 8-12\n\
string      AGE_GROUP_13_TO_19      = 13-19\n\
string      AGE_GROUP_20_TO_36      = 20-36\n\
string      AGE_GROUP_37_TO_65      = 37-65\n\
string      AGE_GROUP_66_TO_99      = 66-99\n\
\n\
\n\
\n\
";
  }

  static const char* value(const ::spencer_human_attribute_msgs::CategoricalAttribute_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spencer_human_attribute_msgs::CategoricalAttribute_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.subject_id);
      stream.next(m.type);
      stream.next(m.values);
      stream.next(m.confidences);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CategoricalAttribute_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spencer_human_attribute_msgs::CategoricalAttribute_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spencer_human_attribute_msgs::CategoricalAttribute_<ContainerAllocator>& v)
  {
    s << indent << "subject_id: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.subject_id);
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.type);
    s << indent << "values[]" << std::endl;
    for (size_t i = 0; i < v.values.size(); ++i)
    {
      s << indent << "  values[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.values[i]);
    }
    s << indent << "confidences[]" << std::endl;
    for (size_t i = 0; i < v.confidences.size(); ++i)
    {
      s << indent << "  confidences[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.confidences[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPENCER_HUMAN_ATTRIBUTE_MSGS_MESSAGE_CATEGORICALATTRIBUTE_H
