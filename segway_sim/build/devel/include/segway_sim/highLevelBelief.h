// Generated by gencpp from file segway_sim/highLevelBelief.msg
// DO NOT EDIT!


#ifndef SEGWAY_SIM_MESSAGE_HIGHLEVELBELIEF_H
#define SEGWAY_SIM_MESSAGE_HIGHLEVELBELIEF_H


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
struct highLevelBelief_
{
  typedef highLevelBelief_<ContainerAllocator> Type;

  highLevelBelief_()
    : status(0)
    , header()
    , probMiss(0.0)
    , bt()
    , prob()
    , targetPosDrone()
    , targetPosSegway()  {
      bt.assign(0.0);

      prob.assign(0.0);

      targetPosDrone.assign(0.0);

      targetPosSegway.assign(0.0);
  }
  highLevelBelief_(const ContainerAllocator& _alloc)
    : status(0)
    , header(_alloc)
    , probMiss(0.0)
    , bt()
    , prob()
    , targetPosDrone()
    , targetPosSegway()  {
  (void)_alloc;
      bt.assign(0.0);

      prob.assign(0.0);

      targetPosDrone.assign(0.0);

      targetPosSegway.assign(0.0);
  }



   typedef uint8_t _status_type;
  _status_type status;

   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _probMiss_type;
  _probMiss_type probMiss;

   typedef boost::array<double, 40>  _bt_type;
  _bt_type bt;

   typedef boost::array<double, 20>  _prob_type;
  _prob_type prob;

   typedef boost::array<double, 2>  _targetPosDrone_type;
  _targetPosDrone_type targetPosDrone;

   typedef boost::array<double, 2>  _targetPosSegway_type;
  _targetPosSegway_type targetPosSegway;





  typedef boost::shared_ptr< ::segway_sim::highLevelBelief_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::segway_sim::highLevelBelief_<ContainerAllocator> const> ConstPtr;

}; // struct highLevelBelief_

typedef ::segway_sim::highLevelBelief_<std::allocator<void> > highLevelBelief;

typedef boost::shared_ptr< ::segway_sim::highLevelBelief > highLevelBeliefPtr;
typedef boost::shared_ptr< ::segway_sim::highLevelBelief const> highLevelBeliefConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::segway_sim::highLevelBelief_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::segway_sim::highLevelBelief_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::segway_sim::highLevelBelief_<ContainerAllocator1> & lhs, const ::segway_sim::highLevelBelief_<ContainerAllocator2> & rhs)
{
  return lhs.status == rhs.status &&
    lhs.header == rhs.header &&
    lhs.probMiss == rhs.probMiss &&
    lhs.bt == rhs.bt &&
    lhs.prob == rhs.prob &&
    lhs.targetPosDrone == rhs.targetPosDrone &&
    lhs.targetPosSegway == rhs.targetPosSegway;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::segway_sim::highLevelBelief_<ContainerAllocator1> & lhs, const ::segway_sim::highLevelBelief_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace segway_sim

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::segway_sim::highLevelBelief_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::segway_sim::highLevelBelief_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::segway_sim::highLevelBelief_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::segway_sim::highLevelBelief_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::segway_sim::highLevelBelief_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::segway_sim::highLevelBelief_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::segway_sim::highLevelBelief_<ContainerAllocator> >
{
  static const char* value()
  {
    return "40f96d12b2895b791f2b4d422fdc68d0";
  }

  static const char* value(const ::segway_sim::highLevelBelief_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x40f96d12b2895b79ULL;
  static const uint64_t static_value2 = 0x1f2b4d422fdc68d0ULL;
};

template<class ContainerAllocator>
struct DataType< ::segway_sim::highLevelBelief_<ContainerAllocator> >
{
  static const char* value()
  {
    return "segway_sim/highLevelBelief";
  }

  static const char* value(const ::segway_sim::highLevelBelief_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::segway_sim::highLevelBelief_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 status\n"
"Header header\n"
"float64 probMiss\n"
"float64[40] bt\n"
"float64[20] prob\n"
"float64[2] targetPosDrone\n"
"float64[2] targetPosSegway\n"
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

  static const char* value(const ::segway_sim::highLevelBelief_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::segway_sim::highLevelBelief_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
      stream.next(m.header);
      stream.next(m.probMiss);
      stream.next(m.bt);
      stream.next(m.prob);
      stream.next(m.targetPosDrone);
      stream.next(m.targetPosSegway);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct highLevelBelief_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::segway_sim::highLevelBelief_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::segway_sim::highLevelBelief_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status);
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "probMiss: ";
    Printer<double>::stream(s, indent + "  ", v.probMiss);
    s << indent << "bt[]" << std::endl;
    for (size_t i = 0; i < v.bt.size(); ++i)
    {
      s << indent << "  bt[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.bt[i]);
    }
    s << indent << "prob[]" << std::endl;
    for (size_t i = 0; i < v.prob.size(); ++i)
    {
      s << indent << "  prob[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.prob[i]);
    }
    s << indent << "targetPosDrone[]" << std::endl;
    for (size_t i = 0; i < v.targetPosDrone.size(); ++i)
    {
      s << indent << "  targetPosDrone[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.targetPosDrone[i]);
    }
    s << indent << "targetPosSegway[]" << std::endl;
    for (size_t i = 0; i < v.targetPosSegway.size(); ++i)
    {
      s << indent << "  targetPosSegway[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.targetPosSegway[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SEGWAY_SIM_MESSAGE_HIGHLEVELBELIEF_H
