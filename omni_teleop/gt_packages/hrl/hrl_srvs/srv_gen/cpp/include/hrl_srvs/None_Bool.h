/* Auto-generated by genmsg_cpp for file /home/aellaboudy/aellaboudy_sandbox/gt_packages_new/gt_packages/hrl/hrl_srvs/srv/None_Bool.srv */
#ifndef HRL_SRVS_SERVICE_NONE_BOOL_H
#define HRL_SRVS_SERVICE_NONE_BOOL_H
#include <string>
#include <vector>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/message.h"
#include "ros/time.h"

#include "ros/service_traits.h"




namespace hrl_srvs
{
template <class ContainerAllocator>
struct None_BoolRequest_ : public ros::Message
{
  typedef None_BoolRequest_<ContainerAllocator> Type;

  None_BoolRequest_()
  {
  }

  None_BoolRequest_(const ContainerAllocator& _alloc)
  {
  }


private:
  static const char* __s_getDataType_() { return "hrl_srvs/None_BoolRequest"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "d41d8cd98f00b204e9800998ecf8427e"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "8b94c1b53db61fb6aed406028ad6332a"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    return size;
  }

  typedef boost::shared_ptr< ::hrl_srvs::None_BoolRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hrl_srvs::None_BoolRequest_<ContainerAllocator>  const> ConstPtr;
}; // struct None_BoolRequest
typedef  ::hrl_srvs::None_BoolRequest_<std::allocator<void> > None_BoolRequest;

typedef boost::shared_ptr< ::hrl_srvs::None_BoolRequest> None_BoolRequestPtr;
typedef boost::shared_ptr< ::hrl_srvs::None_BoolRequest const> None_BoolRequestConstPtr;


template <class ContainerAllocator>
struct None_BoolResponse_ : public ros::Message
{
  typedef None_BoolResponse_<ContainerAllocator> Type;

  None_BoolResponse_()
  : data(false)
  {
  }

  None_BoolResponse_(const ContainerAllocator& _alloc)
  : data(false)
  {
  }

  typedef uint8_t _data_type;
  uint8_t data;


private:
  static const char* __s_getDataType_() { return "hrl_srvs/None_BoolResponse"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "8b94c1b53db61fb6aed406028ad6332a"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "8b94c1b53db61fb6aed406028ad6332a"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "bool data\n\
\n\
\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, data);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, data);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(data);
    return size;
  }

  typedef boost::shared_ptr< ::hrl_srvs::None_BoolResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hrl_srvs::None_BoolResponse_<ContainerAllocator>  const> ConstPtr;
}; // struct None_BoolResponse
typedef  ::hrl_srvs::None_BoolResponse_<std::allocator<void> > None_BoolResponse;

typedef boost::shared_ptr< ::hrl_srvs::None_BoolResponse> None_BoolResponsePtr;
typedef boost::shared_ptr< ::hrl_srvs::None_BoolResponse const> None_BoolResponseConstPtr;

struct None_Bool
{

typedef None_BoolRequest Request;
typedef None_BoolResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct None_Bool
} // namespace hrl_srvs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::hrl_srvs::None_BoolRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::hrl_srvs::None_BoolRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::hrl_srvs::None_BoolRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hrl_srvs/None_BoolRequest";
  }

  static const char* value(const  ::hrl_srvs::None_BoolRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::hrl_srvs::None_BoolRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
";
  }

  static const char* value(const  ::hrl_srvs::None_BoolRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::hrl_srvs::None_BoolRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::hrl_srvs::None_BoolResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "8b94c1b53db61fb6aed406028ad6332a";
  }

  static const char* value(const  ::hrl_srvs::None_BoolResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x8b94c1b53db61fb6ULL;
  static const uint64_t static_value2 = 0xaed406028ad6332aULL;
};

template<class ContainerAllocator>
struct DataType< ::hrl_srvs::None_BoolResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hrl_srvs/None_BoolResponse";
  }

  static const char* value(const  ::hrl_srvs::None_BoolResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::hrl_srvs::None_BoolResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool data\n\
\n\
\n\
\n\
";
  }

  static const char* value(const  ::hrl_srvs::None_BoolResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::hrl_srvs::None_BoolResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::hrl_srvs::None_BoolRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct None_BoolRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::hrl_srvs::None_BoolResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.data);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct None_BoolResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<hrl_srvs::None_Bool> {
  static const char* value() 
  {
    return "8b94c1b53db61fb6aed406028ad6332a";
  }

  static const char* value(const hrl_srvs::None_Bool&) { return value(); } 
};

template<>
struct DataType<hrl_srvs::None_Bool> {
  static const char* value() 
  {
    return "hrl_srvs/None_Bool";
  }

  static const char* value(const hrl_srvs::None_Bool&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<hrl_srvs::None_BoolRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "8b94c1b53db61fb6aed406028ad6332a";
  }

  static const char* value(const hrl_srvs::None_BoolRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<hrl_srvs::None_BoolRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hrl_srvs/None_Bool";
  }

  static const char* value(const hrl_srvs::None_BoolRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<hrl_srvs::None_BoolResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "8b94c1b53db61fb6aed406028ad6332a";
  }

  static const char* value(const hrl_srvs::None_BoolResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<hrl_srvs::None_BoolResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hrl_srvs/None_Bool";
  }

  static const char* value(const hrl_srvs::None_BoolResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // HRL_SRVS_SERVICE_NONE_BOOL_H

