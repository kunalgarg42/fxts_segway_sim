// Generated by gencpp from file segway_sim/valFunCnst.msg
// DO NOT EDIT!


#ifndef SEGWAY_SIM_MESSAGE_VALFUNCNST_H
#define SEGWAY_SIM_MESSAGE_VALFUNCNST_H


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
struct valFunCnst_
{
  typedef valFunCnst_<ContainerAllocator> Type;

  valFunCnst_()
    : status(0)
    , header()
    , x1(0.0)
    , y1(0.0)
    , c1(0.0)
    , x2(0.0)
    , y2(0.0)
    , c2(0.0)
    , x3(0.0)
    , y3(0.0)
    , c3(0.0)
    , xmin(0.0)
    , xmax(0.0)
    , ymin(0.0)
    , ymax(0.0)
    , highLevTime(0.0)
    , term_xmin(0.0)
    , term_xmax(0.0)
    , term_ymin(0.0)
    , term_ymax(0.0)  {
    }
  valFunCnst_(const ContainerAllocator& _alloc)
    : status(0)
    , header(_alloc)
    , x1(0.0)
    , y1(0.0)
    , c1(0.0)
    , x2(0.0)
    , y2(0.0)
    , c2(0.0)
    , x3(0.0)
    , y3(0.0)
    , c3(0.0)
    , xmin(0.0)
    , xmax(0.0)
    , ymin(0.0)
    , ymax(0.0)
    , highLevTime(0.0)
    , term_xmin(0.0)
    , term_xmax(0.0)
    , term_ymin(0.0)
    , term_ymax(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _status_type;
  _status_type status;

   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _x1_type;
  _x1_type x1;

   typedef double _y1_type;
  _y1_type y1;

   typedef double _c1_type;
  _c1_type c1;

   typedef double _x2_type;
  _x2_type x2;

   typedef double _y2_type;
  _y2_type y2;

   typedef double _c2_type;
  _c2_type c2;

   typedef double _x3_type;
  _x3_type x3;

   typedef double _y3_type;
  _y3_type y3;

   typedef double _c3_type;
  _c3_type c3;

   typedef double _xmin_type;
  _xmin_type xmin;

   typedef double _xmax_type;
  _xmax_type xmax;

   typedef double _ymin_type;
  _ymin_type ymin;

   typedef double _ymax_type;
  _ymax_type ymax;

   typedef double _highLevTime_type;
  _highLevTime_type highLevTime;

   typedef double _term_xmin_type;
  _term_xmin_type term_xmin;

   typedef double _term_xmax_type;
  _term_xmax_type term_xmax;

   typedef double _term_ymin_type;
  _term_ymin_type term_ymin;

   typedef double _term_ymax_type;
  _term_ymax_type term_ymax;





  typedef boost::shared_ptr< ::segway_sim::valFunCnst_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::segway_sim::valFunCnst_<ContainerAllocator> const> ConstPtr;

}; // struct valFunCnst_

typedef ::segway_sim::valFunCnst_<std::allocator<void> > valFunCnst;

typedef boost::shared_ptr< ::segway_sim::valFunCnst > valFunCnstPtr;
typedef boost::shared_ptr< ::segway_sim::valFunCnst const> valFunCnstConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::segway_sim::valFunCnst_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::segway_sim::valFunCnst_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::segway_sim::valFunCnst_<ContainerAllocator1> & lhs, const ::segway_sim::valFunCnst_<ContainerAllocator2> & rhs)
{
  return lhs.status == rhs.status &&
    lhs.header == rhs.header &&
    lhs.x1 == rhs.x1 &&
    lhs.y1 == rhs.y1 &&
    lhs.c1 == rhs.c1 &&
    lhs.x2 == rhs.x2 &&
    lhs.y2 == rhs.y2 &&
    lhs.c2 == rhs.c2 &&
    lhs.x3 == rhs.x3 &&
    lhs.y3 == rhs.y3 &&
    lhs.c3 == rhs.c3 &&
    lhs.xmin == rhs.xmin &&
    lhs.xmax == rhs.xmax &&
    lhs.ymin == rhs.ymin &&
    lhs.ymax == rhs.ymax &&
    lhs.highLevTime == rhs.highLevTime &&
    lhs.term_xmin == rhs.term_xmin &&
    lhs.term_xmax == rhs.term_xmax &&
    lhs.term_ymin == rhs.term_ymin &&
    lhs.term_ymax == rhs.term_ymax;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::segway_sim::valFunCnst_<ContainerAllocator1> & lhs, const ::segway_sim::valFunCnst_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace segway_sim

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::segway_sim::valFunCnst_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::segway_sim::valFunCnst_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::segway_sim::valFunCnst_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::segway_sim::valFunCnst_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::segway_sim::valFunCnst_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::segway_sim::valFunCnst_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::segway_sim::valFunCnst_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1e574332a926b29e85d7fb4e82e20fdd";
  }

  static const char* value(const ::segway_sim::valFunCnst_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1e574332a926b29eULL;
  static const uint64_t static_value2 = 0x85d7fb4e82e20fddULL;
};

template<class ContainerAllocator>
struct DataType< ::segway_sim::valFunCnst_<ContainerAllocator> >
{
  static const char* value()
  {
    return "segway_sim/valFunCnst";
  }

  static const char* value(const ::segway_sim::valFunCnst_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::segway_sim::valFunCnst_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 status\n"
"Header header\n"
"float64 x1\n"
"float64 y1\n"
"float64 c1\n"
"float64 x2\n"
"float64 y2\n"
"float64 c2\n"
"float64 x3\n"
"float64 y3\n"
"float64 c3\n"
"float64 xmin\n"
"float64 xmax\n"
"float64 ymin\n"
"float64 ymax\n"
"float64 highLevTime\n"
"float64 term_xmin\n"
"float64 term_xmax\n"
"float64 term_ymin\n"
"float64 term_ymax\n"
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

  static const char* value(const ::segway_sim::valFunCnst_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::segway_sim::valFunCnst_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
      stream.next(m.header);
      stream.next(m.x1);
      stream.next(m.y1);
      stream.next(m.c1);
      stream.next(m.x2);
      stream.next(m.y2);
      stream.next(m.c2);
      stream.next(m.x3);
      stream.next(m.y3);
      stream.next(m.c3);
      stream.next(m.xmin);
      stream.next(m.xmax);
      stream.next(m.ymin);
      stream.next(m.ymax);
      stream.next(m.highLevTime);
      stream.next(m.term_xmin);
      stream.next(m.term_xmax);
      stream.next(m.term_ymin);
      stream.next(m.term_ymax);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct valFunCnst_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::segway_sim::valFunCnst_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::segway_sim::valFunCnst_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status);
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "x1: ";
    Printer<double>::stream(s, indent + "  ", v.x1);
    s << indent << "y1: ";
    Printer<double>::stream(s, indent + "  ", v.y1);
    s << indent << "c1: ";
    Printer<double>::stream(s, indent + "  ", v.c1);
    s << indent << "x2: ";
    Printer<double>::stream(s, indent + "  ", v.x2);
    s << indent << "y2: ";
    Printer<double>::stream(s, indent + "  ", v.y2);
    s << indent << "c2: ";
    Printer<double>::stream(s, indent + "  ", v.c2);
    s << indent << "x3: ";
    Printer<double>::stream(s, indent + "  ", v.x3);
    s << indent << "y3: ";
    Printer<double>::stream(s, indent + "  ", v.y3);
    s << indent << "c3: ";
    Printer<double>::stream(s, indent + "  ", v.c3);
    s << indent << "xmin: ";
    Printer<double>::stream(s, indent + "  ", v.xmin);
    s << indent << "xmax: ";
    Printer<double>::stream(s, indent + "  ", v.xmax);
    s << indent << "ymin: ";
    Printer<double>::stream(s, indent + "  ", v.ymin);
    s << indent << "ymax: ";
    Printer<double>::stream(s, indent + "  ", v.ymax);
    s << indent << "highLevTime: ";
    Printer<double>::stream(s, indent + "  ", v.highLevTime);
    s << indent << "term_xmin: ";
    Printer<double>::stream(s, indent + "  ", v.term_xmin);
    s << indent << "term_xmax: ";
    Printer<double>::stream(s, indent + "  ", v.term_xmax);
    s << indent << "term_ymin: ";
    Printer<double>::stream(s, indent + "  ", v.term_ymin);
    s << indent << "term_ymax: ";
    Printer<double>::stream(s, indent + "  ", v.term_ymax);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SEGWAY_SIM_MESSAGE_VALFUNCNST_H