/* Auto-generated by genmsg_cpp for file /home/biorob/rosstacks/core_dev/core_communication_msgs/msg/ControlLoop.msg */
#ifndef CORE_COMMUNICATION_MSGS_MESSAGE_CONTROLLOOP_H
#define CORE_COMMUNICATION_MSGS_MESSAGE_CONTROLLOOP_H
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
struct ControlLoop_ {
  typedef ControlLoop_<ContainerAllocator> Type;

  ControlLoop_()
  : className()
  , baseClassName()
  , description()
  , referenceId(0)
  {
  }

  ControlLoop_(const ContainerAllocator& _alloc)
  : className(_alloc)
  , baseClassName(_alloc)
  , description(_alloc)
  , referenceId(0)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _className_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  className;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _baseClassName_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  baseClassName;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _description_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  description;

  typedef int64_t _referenceId_type;
  int64_t referenceId;


  typedef boost::shared_ptr< ::core_communication_msgs::ControlLoop_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::core_communication_msgs::ControlLoop_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct ControlLoop
typedef  ::core_communication_msgs::ControlLoop_<std::allocator<void> > ControlLoop;

typedef boost::shared_ptr< ::core_communication_msgs::ControlLoop> ControlLoopPtr;
typedef boost::shared_ptr< ::core_communication_msgs::ControlLoop const> ControlLoopConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::core_communication_msgs::ControlLoop_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::core_communication_msgs::ControlLoop_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace core_communication_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::core_communication_msgs::ControlLoop_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::core_communication_msgs::ControlLoop_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::core_communication_msgs::ControlLoop_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e338bc92ea3cf84439cefaa9f34d464e";
  }

  static const char* value(const  ::core_communication_msgs::ControlLoop_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xe338bc92ea3cf844ULL;
  static const uint64_t static_value2 = 0x39cefaa9f34d464eULL;
};

template<class ContainerAllocator>
struct DataType< ::core_communication_msgs::ControlLoop_<ContainerAllocator> > {
  static const char* value() 
  {
    return "core_communication_msgs/ControlLoop";
  }

  static const char* value(const  ::core_communication_msgs::ControlLoop_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::core_communication_msgs::ControlLoop_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string className\n\
string baseClassName\n\
string description\n\
int64 referenceId\n\
\n\
";
  }

  static const char* value(const  ::core_communication_msgs::ControlLoop_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::core_communication_msgs::ControlLoop_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.className);
    stream.next(m.baseClassName);
    stream.next(m.description);
    stream.next(m.referenceId);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ControlLoop_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::core_communication_msgs::ControlLoop_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::core_communication_msgs::ControlLoop_<ContainerAllocator> & v) 
  {
    s << indent << "className: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.className);
    s << indent << "baseClassName: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.baseClassName);
    s << indent << "description: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.description);
    s << indent << "referenceId: ";
    Printer<int64_t>::stream(s, indent + "  ", v.referenceId);
  }
};


} // namespace message_operations
} // namespace ros

#endif // CORE_COMMUNICATION_MSGS_MESSAGE_CONTROLLOOP_H

