// Generated by gencpp from file segway_sim/lowLevelLog.msg
// DO NOT EDIT!


#ifndef SEGWAY_SIM_MESSAGE_LOWLEVELLOG_H
#define SEGWAY_SIM_MESSAGE_LOWLEVELLOG_H


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
struct lowLevelLog_
{
  typedef lowLevelLog_<ContainerAllocator> Type;

  lowLevelLog_()
    : status(0)
    , header()
    , time(0.0)
    , X()
    , Xn()
    , uMPC()
    , uCBF()
    , uTot()
    , flagQP(0.0)
    , V(0.0)
    , h(0.0)
    , QPtime(0.0)  {
      X.assign(0.0);

      Xn.assign(0.0);

      uMPC.assign(0.0);

      uCBF.assign(0.0);

      uTot.assign(0.0);
  }
  lowLevelLog_(const ContainerAllocator& _alloc)
    : status(0)
    , header(_alloc)
    , time(0.0)
    , X()
    , Xn()
    , uMPC()
    , uCBF()
    , uTot()
    , flagQP(0.0)
    , V(0.0)
    , h(0.0)
    , QPtime(0.0)  {
  (void)_alloc;
      X.assign(0.0);

      Xn.assign(0.0);

      uMPC.assign(0.0);

      uCBF.assign(0.0);

      uTot.assign(0.0);
  }



   typedef uint8_t _status_type;
  _status_type status;

   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _time_type;
  _time_type time;

   typedef boost::array<double, 7>  _X_type;
  _X_type X;

   typedef boost::array<double, 7>  _Xn_type;
  _Xn_type Xn;

   typedef boost::array<double, 2>  _uMPC_type;
  _uMPC_type uMPC;

   typedef boost::array<double, 2>  _uCBF_type;
  _uCBF_type uCBF;

   typedef boost::array<double, 2>  _uTot_type;
  _uTot_type uTot;

   typedef double _flagQP_type;
  _flagQP_type flagQP;

   typedef double _V_type;
  _V_type V;

   typedef double _h_type;
  _h_type h;

   typedef double _QPtime_type;
  _QPtime_type QPtime;





  typedef boost::shared_ptr< ::segway_sim::lowLevelLog_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::segway_sim::lowLevelLog_<ContainerAllocator> const> ConstPtr;

}; // struct lowLevelLog_

typedef ::segway_sim::lowLevelLog_<std::allocator<void> > lowLevelLog;

typedef boost::shared_ptr< ::segway_sim::lowLevelLog > lowLevelLogPtr;
typedef boost::shared_ptr< ::segway_sim::lowLevelLog const> lowLevelLogConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::segway_sim::lowLevelLog_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::segway_sim::lowLevelLog_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::segway_sim::lowLevelLog_<ContainerAllocator1> & lhs, const ::segway_sim::lowLevelLog_<ContainerAllocator2> & rhs)
{
  return lhs.status == rhs.status &&
    lhs.header == rhs.header &&
    lhs.time == rhs.time &&
    lhs.X == rhs.X &&
    lhs.Xn == rhs.Xn &&
    lhs.uMPC == rhs.uMPC &&
    lhs.uCBF == rhs.uCBF &&
    lhs.uTot == rhs.uTot &&
    lhs.flagQP == rhs.flagQP &&
    lhs.V == rhs.V &&
    lhs.h == rhs.h &&
    lhs.QPtime == rhs.QPtime;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::segway_sim::lowLevelLog_<ContainerAllocator1> & lhs, const ::segway_sim::lowLevelLog_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace segway_sim

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::segway_sim::lowLevelLog_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::segway_sim::lowLevelLog_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::segway_sim::lowLevelLog_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::segway_sim::lowLevelLog_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::segway_sim::lowLevelLog_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::segway_sim::lowLevelLog_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::segway_sim::lowLevelLog_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cce8d89a7ce7c3c6725aa883936dac51";
  }

  static const char* value(const ::segway_sim::lowLevelLog_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcce8d89a7ce7c3c6ULL;
  static const uint64_t static_value2 = 0x725aa883936dac51ULL;
};

template<class ContainerAllocator>
struct DataType< ::segway_sim::lowLevelLog_<ContainerAllocator> >
{
  static const char* value()
  {
    return "segway_sim/lowLevelLog";
  }

  static const char* value(const ::segway_sim::lowLevelLog_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::segway_sim::lowLevelLog_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 status\n"
"Header header\n"
"float64 time\n"
"float64[7] X\n"
"float64[7] Xn\n"
"float64[2] uMPC\n"
"float64[2] uCBF\n"
"float64[2] uTot\n"
"float64 flagQP\n"
"float64 V\n"
"float64 h\n"
"float64 QPtime\n"
"\n"
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

  static const char* value(const ::segway_sim::lowLevelLog_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::segway_sim::lowLevelLog_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
      stream.next(m.header);
      stream.next(m.time);
      stream.next(m.X);
      stream.next(m.Xn);
      stream.next(m.uMPC);
      stream.next(m.uCBF);
      stream.next(m.uTot);
      stream.next(m.flagQP);
      stream.next(m.V);
      stream.next(m.h);
      stream.next(m.QPtime);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct lowLevelLog_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::segway_sim::lowLevelLog_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::segway_sim::lowLevelLog_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status);
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "time: ";
    Printer<double>::stream(s, indent + "  ", v.time);
    s << indent << "X[]" << std::endl;
    for (size_t i = 0; i < v.X.size(); ++i)
    {
      s << indent << "  X[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.X[i]);
    }
    s << indent << "Xn[]" << std::endl;
    for (size_t i = 0; i < v.Xn.size(); ++i)
    {
      s << indent << "  Xn[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.Xn[i]);
    }
    s << indent << "uMPC[]" << std::endl;
    for (size_t i = 0; i < v.uMPC.size(); ++i)
    {
      s << indent << "  uMPC[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.uMPC[i]);
    }
    s << indent << "uCBF[]" << std::endl;
    for (size_t i = 0; i < v.uCBF.size(); ++i)
    {
      s << indent << "  uCBF[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.uCBF[i]);
    }
    s << indent << "uTot[]" << std::endl;
    for (size_t i = 0; i < v.uTot.size(); ++i)
    {
      s << indent << "  uTot[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.uTot[i]);
    }
    s << indent << "flagQP: ";
    Printer<double>::stream(s, indent + "  ", v.flagQP);
    s << indent << "V: ";
    Printer<double>::stream(s, indent + "  ", v.V);
    s << indent << "h: ";
    Printer<double>::stream(s, indent + "  ", v.h);
    s << indent << "QPtime: ";
    Printer<double>::stream(s, indent + "  ", v.QPtime);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SEGWAY_SIM_MESSAGE_LOWLEVELLOG_H
