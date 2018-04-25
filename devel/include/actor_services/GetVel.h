// Generated by gencpp from file actor_services/GetVel.msg
// DO NOT EDIT!


#ifndef ACTOR_SERVICES_MESSAGE_GETVEL_H
#define ACTOR_SERVICES_MESSAGE_GETVEL_H

#include <ros/service_traits.h>


#include <actor_services/GetVelRequest.h>
#include <actor_services/GetVelResponse.h>


namespace actor_services
{

struct GetVel
{

typedef GetVelRequest Request;
typedef GetVelResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetVel
} // namespace actor_services


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::actor_services::GetVel > {
  static const char* value()
  {
    return "f641daffe2334e864223c2a993ab4b8b";
  }

  static const char* value(const ::actor_services::GetVel&) { return value(); }
};

template<>
struct DataType< ::actor_services::GetVel > {
  static const char* value()
  {
    return "actor_services/GetVel";
  }

  static const char* value(const ::actor_services::GetVel&) { return value(); }
};


// service_traits::MD5Sum< ::actor_services::GetVelRequest> should match 
// service_traits::MD5Sum< ::actor_services::GetVel > 
template<>
struct MD5Sum< ::actor_services::GetVelRequest>
{
  static const char* value()
  {
    return MD5Sum< ::actor_services::GetVel >::value();
  }
  static const char* value(const ::actor_services::GetVelRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::actor_services::GetVelRequest> should match 
// service_traits::DataType< ::actor_services::GetVel > 
template<>
struct DataType< ::actor_services::GetVelRequest>
{
  static const char* value()
  {
    return DataType< ::actor_services::GetVel >::value();
  }
  static const char* value(const ::actor_services::GetVelRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::actor_services::GetVelResponse> should match 
// service_traits::MD5Sum< ::actor_services::GetVel > 
template<>
struct MD5Sum< ::actor_services::GetVelResponse>
{
  static const char* value()
  {
    return MD5Sum< ::actor_services::GetVel >::value();
  }
  static const char* value(const ::actor_services::GetVelResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::actor_services::GetVelResponse> should match 
// service_traits::DataType< ::actor_services::GetVel > 
template<>
struct DataType< ::actor_services::GetVelResponse>
{
  static const char* value()
  {
    return DataType< ::actor_services::GetVel >::value();
  }
  static const char* value(const ::actor_services::GetVelResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ACTOR_SERVICES_MESSAGE_GETVEL_H