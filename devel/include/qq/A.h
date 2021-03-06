// Generated by gencpp from file qq/A.msg
// DO NOT EDIT!


#ifndef QQ_MESSAGE_A_H
#define QQ_MESSAGE_A_H

#include <ros/service_traits.h>


#include <qq/ARequest.h>
#include <qq/AResponse.h>


namespace qq
{

struct A
{

typedef ARequest Request;
typedef AResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct A
} // namespace qq


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::qq::A > {
  static const char* value()
  {
    return "629a350524c503aa37f502e13a90160a";
  }

  static const char* value(const ::qq::A&) { return value(); }
};

template<>
struct DataType< ::qq::A > {
  static const char* value()
  {
    return "qq/A";
  }

  static const char* value(const ::qq::A&) { return value(); }
};


// service_traits::MD5Sum< ::qq::ARequest> should match 
// service_traits::MD5Sum< ::qq::A > 
template<>
struct MD5Sum< ::qq::ARequest>
{
  static const char* value()
  {
    return MD5Sum< ::qq::A >::value();
  }
  static const char* value(const ::qq::ARequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::qq::ARequest> should match 
// service_traits::DataType< ::qq::A > 
template<>
struct DataType< ::qq::ARequest>
{
  static const char* value()
  {
    return DataType< ::qq::A >::value();
  }
  static const char* value(const ::qq::ARequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::qq::AResponse> should match 
// service_traits::MD5Sum< ::qq::A > 
template<>
struct MD5Sum< ::qq::AResponse>
{
  static const char* value()
  {
    return MD5Sum< ::qq::A >::value();
  }
  static const char* value(const ::qq::AResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::qq::AResponse> should match 
// service_traits::DataType< ::qq::A > 
template<>
struct DataType< ::qq::AResponse>
{
  static const char* value()
  {
    return DataType< ::qq::A >::value();
  }
  static const char* value(const ::qq::AResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // QQ_MESSAGE_A_H
