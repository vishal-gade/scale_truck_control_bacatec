#ifndef _ROS_scale_truck_control_vel_h
#define _ROS_scale_truck_control_vel_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace scale_truck_control
{

  class vel : public ros::Msg
  {
    public:
      typedef float _ref_vel_type;
      _ref_vel_type ref_vel;
      typedef float _cur_vel_type;
      _cur_vel_type cur_vel;

    vel():
      ref_vel(0),
      cur_vel(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_ref_vel;
      u_ref_vel.real = this->ref_vel;
      *(outbuffer + offset + 0) = (u_ref_vel.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_ref_vel.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_ref_vel.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_ref_vel.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->ref_vel);
      union {
        float real;
        uint32_t base;
      } u_cur_vel;
      u_cur_vel.real = this->cur_vel;
      *(outbuffer + offset + 0) = (u_cur_vel.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_cur_vel.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_cur_vel.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_cur_vel.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->cur_vel);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_ref_vel;
      u_ref_vel.base = 0;
      u_ref_vel.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_ref_vel.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_ref_vel.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_ref_vel.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->ref_vel = u_ref_vel.real;
      offset += sizeof(this->ref_vel);
      union {
        float real;
        uint32_t base;
      } u_cur_vel;
      u_cur_vel.base = 0;
      u_cur_vel.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_cur_vel.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_cur_vel.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_cur_vel.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->cur_vel = u_cur_vel.real;
      offset += sizeof(this->cur_vel);
     return offset;
    }

    const char * getType(){ return "scale_truck_control/vel"; };
    const char * getMD5(){ return "22033bc2c0faab7cefb22779d4376177"; };

  };

}
#endif
