// Generated by gencpp from file segway_sim/cmd.msg
// DO NOT EDIT!


#ifndef SEGWAY_SIM_MESSAGE_CMD_H
#define SEGWAY_SIM_MESSAGE_CMD_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace segway_sim
{
template <class ContainerAllocator>
struct cmd_
{
  typedef cmd_<ContainerAllocator> Type;

  cmd_()
    : status(0)
    , header()
    , cmd()  {
    }
  cmd_(const ContainerAllocator& _alloc)
    : status(0)
    , header(_alloc)
    , cmd(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _status_type;
  _status_type status;

   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _cmd_type;
  _cmd_type cmd;





  typedef boost::shared_ptr< ::segway_sim::cmd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::segway_sim::cmd_<ContainerAllocator> const> ConstPtr;

}; // struct cmd_

typedef ::segway_sim::cmd_<std::allocator<void> > cmd;

typedef boost::shared_ptr< ::segway_sim::cmd > cmdPtr;
typedef boost::shared_ptr< ::segway_sim::cmd const> cmdConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::segway_sim::cmd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::segway_sim::cmd_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::segway_sim::cmd_<ContainerAllocator1> & lhs, const ::segway_sim::cmd_<ContainerAllocator2> & rhs)
{
  return lhs.status == rhs.status &&
    lhs.header == rhs.header &&
    lhs.cmd == rhs.cmd;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::segway_sim::cmd_<ContainerAllocator1> & lhs, const ::segway_sim::cmd_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace segway_sim

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::segway_sim::cmd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::segway_sim::cmd_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::segway_sim::cmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::segway_sim::cmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::segway_sim::cmd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::segway_sim::cmd_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::segway_sim::cmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "76a2e1e34eae4f29f2be2f791de0ac98";
  }

  static const char* value(const ::segway_sim::cmd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x76a2e1e34eae4f29ULL;
  static const uint64_t static_value2 = 0xf2be2f791de0ac98ULL;
};

template<class ContainerAllocator>
struct DataType< ::segway_sim::cmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "segway_sim/cmd";
  }

  static const char* value(const ::segway_sim::cmd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::segway_sim::cmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 status\n"
"Header header\n"
"float64[] cmd\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::segway_sim::cmd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::segway_sim::cmd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
      stream.next(m.header);
      stream.next(m.cmd);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct cmd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::segway_sim::cmd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::segway_sim::cmd_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status);
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "cmd[]" << std::endl;
    for (size_t i = 0; i < v.cmd.size(); ++i)
    {
      s << indent << "  cmd[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.cmd[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SEGWAY_SIM_MESSAGE_CMD_H
