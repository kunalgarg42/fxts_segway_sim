// Generated by gencpp from file segway_sim/input.msg
// DO NOT EDIT!


#ifndef SEGWAY_SIM_MESSAGE_INPUT_H
#define SEGWAY_SIM_MESSAGE_INPUT_H


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
struct input_
{
  typedef input_<ContainerAllocator> Type;

  input_()
    : status(0)
    , header()
    , inputVec()  {
      inputVec.assign(0.0);
  }
  input_(const ContainerAllocator& _alloc)
    : status(0)
    , header(_alloc)
    , inputVec()  {
  (void)_alloc;
      inputVec.assign(0.0);
  }



   typedef uint8_t _status_type;
  _status_type status;

   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef boost::array<double, 2>  _inputVec_type;
  _inputVec_type inputVec;





  typedef boost::shared_ptr< ::segway_sim::input_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::segway_sim::input_<ContainerAllocator> const> ConstPtr;

}; // struct input_

typedef ::segway_sim::input_<std::allocator<void> > input;

typedef boost::shared_ptr< ::segway_sim::input > inputPtr;
typedef boost::shared_ptr< ::segway_sim::input const> inputConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::segway_sim::input_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::segway_sim::input_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::segway_sim::input_<ContainerAllocator1> & lhs, const ::segway_sim::input_<ContainerAllocator2> & rhs)
{
  return lhs.status == rhs.status &&
    lhs.header == rhs.header &&
    lhs.inputVec == rhs.inputVec;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::segway_sim::input_<ContainerAllocator1> & lhs, const ::segway_sim::input_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace segway_sim

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::segway_sim::input_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::segway_sim::input_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::segway_sim::input_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::segway_sim::input_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::segway_sim::input_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::segway_sim::input_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::segway_sim::input_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7dea47cc5205abdf3e669c9357855425";
  }

  static const char* value(const ::segway_sim::input_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7dea47cc5205abdfULL;
  static const uint64_t static_value2 = 0x3e669c9357855425ULL;
};

template<class ContainerAllocator>
struct DataType< ::segway_sim::input_<ContainerAllocator> >
{
  static const char* value()
  {
    return "segway_sim/input";
  }

  static const char* value(const ::segway_sim::input_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::segway_sim::input_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 status\n"
"Header header\n"
"float64[2] inputVec\n"
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

  static const char* value(const ::segway_sim::input_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::segway_sim::input_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
      stream.next(m.header);
      stream.next(m.inputVec);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct input_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::segway_sim::input_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::segway_sim::input_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status);
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "inputVec[]" << std::endl;
    for (size_t i = 0; i < v.inputVec.size(); ++i)
    {
      s << indent << "  inputVec[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.inputVec[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SEGWAY_SIM_MESSAGE_INPUT_H
