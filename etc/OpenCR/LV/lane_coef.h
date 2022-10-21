#ifndef _ROS_scale_truck_control_lane_coef_h
#define _ROS_scale_truck_control_lane_coef_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "scale_truck_control/lane.h"

namespace scale_truck_control
{

  class lane_coef : public ros::Msg
  {
    public:
      typedef scale_truck_control::lane _left_type;
      _left_type left;
      typedef scale_truck_control::lane _right_type;
      _right_type right;
      typedef scale_truck_control::lane _center_type;
      _center_type center;

    lane_coef():
      left(),
      right(),
      center()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->left.serialize(outbuffer + offset);
      offset += this->right.serialize(outbuffer + offset);
      offset += this->center.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->left.deserialize(inbuffer + offset);
      offset += this->right.deserialize(inbuffer + offset);
      offset += this->center.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return "scale_truck_control/lane_coef"; };
    const char * getMD5(){ return "ce20933ad34b813e016600c3706e1251"; };

  };

}
#endif
