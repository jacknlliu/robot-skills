/* Auto-generated by genmsg_cpp for file /home/biorob/rosstacks/core_dev/core_communication_msgs/msg/BioRobTimingInfo.msg */
#ifndef CORE_COMMUNICATION_MSGS_MESSAGE_BIOROBTIMINGINFO_H
#define CORE_COMMUNICATION_MSGS_MESSAGE_BIOROBTIMINGINFO_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace core_communication_msgs
{
template <class ContainerAllocator>
struct BioRobTimingInfo_ {
  typedef BioRobTimingInfo_<ContainerAllocator> Type;

  BioRobTimingInfo_()
  : timestamp_nsec(0)
  , timestamp_delta_nsec(0)
  , timestamp_second(0.0)
  , timestamp_delta_second(0.0)
  {
  }

  BioRobTimingInfo_(const ContainerAllocator& _alloc)
  : timestamp_nsec(0)
  , timestamp_delta_nsec(0)
  , timestamp_second(0.0)
  , timestamp_delta_second(0.0)
  {
  }

  typedef uint64_t _timestamp_nsec_type;
  uint64_t timestamp_nsec;

  typedef uint64_t _timestamp_delta_nsec_type;
  uint64_t timestamp_delta_nsec;

  typedef double _timestamp_second_type;
  double timestamp_second;

  typedef double _timestamp_delta_second_type;
  double timestamp_delta_second;


  typedef boost::shared_ptr< ::core_communication_msgs::BioRobTimingInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::core_communication_msgs::BioRobTimingInfo_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct BioRobTimingInfo
typedef  ::core_communication_msgs::BioRobTimingInfo_<std::allocator<void> > BioRobTimingInfo;

typedef boost::shared_ptr< ::core_communication_msgs::BioRobTimingInfo> BioRobTimingInfoPtr;
typedef boost::shared_ptr< ::core_communication_msgs::BioRobTimingInfo const> BioRobTimingInfoConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::core_communication_msgs::BioRobTimingInfo_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::core_communication_msgs::BioRobTimingInfo_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace core_communication_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::core_communication_msgs::BioRobTimingInfo_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::core_communication_msgs::BioRobTimingInfo_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::core_communication_msgs::BioRobTimingInfo_<ContainerAllocator> > {
  static const char* value() 
  {
    return "084b989d61a3c81043143a886f388f82";
  }

  static const char* value(const  ::core_communication_msgs::BioRobTimingInfo_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x084b989d61a3c810ULL;
  static const uint64_t static_value2 = 0x43143a886f388f82ULL;
};

template<class ContainerAllocator>
struct DataType< ::core_communication_msgs::BioRobTimingInfo_<ContainerAllocator> > {
  static const char* value() 
  {
    return "core_communication_msgs/BioRobTimingInfo";
  }

  static const char* value(const  ::core_communication_msgs::BioRobTimingInfo_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::core_communication_msgs::BioRobTimingInfo_<ContainerAllocator> > {
  static const char* value() 
  {
    return "uint64 timestamp_nsec\n\
uint64 timestamp_delta_nsec\n\
float64 timestamp_second\n\
float64 timestamp_delta_second\n\
\n\
";
  }

  static const char* value(const  ::core_communication_msgs::BioRobTimingInfo_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::core_communication_msgs::BioRobTimingInfo_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::core_communication_msgs::BioRobTimingInfo_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.timestamp_nsec);
    stream.next(m.timestamp_delta_nsec);
    stream.next(m.timestamp_second);
    stream.next(m.timestamp_delta_second);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct BioRobTimingInfo_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::core_communication_msgs::BioRobTimingInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::core_communication_msgs::BioRobTimingInfo_<ContainerAllocator> & v) 
  {
    s << indent << "timestamp_nsec: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.timestamp_nsec);
    s << indent << "timestamp_delta_nsec: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.timestamp_delta_nsec);
    s << indent << "timestamp_second: ";
    Printer<double>::stream(s, indent + "  ", v.timestamp_second);
    s << indent << "timestamp_delta_second: ";
    Printer<double>::stream(s, indent + "  ", v.timestamp_delta_second);
  }
};


} // namespace message_operations
} // namespace ros

#endif // CORE_COMMUNICATION_MSGS_MESSAGE_BIOROBTIMINGINFO_H
