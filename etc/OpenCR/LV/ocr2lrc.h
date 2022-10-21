#ifndef _ROS_scale_truck_control_ocr2lrc_h
#define _ROS_scale_truck_control_ocr2lrc_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace scale_truck_control
{

  class ocr2lrc : public ros::Msg
  {
    public:
      typedef float _cur_vel_type;
      _cur_vel_type cur_vel;
      typedef float _u_k_type;
      _u_k_type u_k;

    ocr2lrc():
      cur_vel(0),
      u_k(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
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
      union {
        float real;
        uint32_t base;
      } u_u_k;
      u_u_k.real = this->u_k;
      *(outbuffer + offset + 0) = (u_u_k.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_u_k.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_u_k.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_u_k.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->u_k);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
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
      union {
        float real;
        uint32_t base;
      } u_u_k;
      u_u_k.base = 0;
      u_u_k.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_u_k.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_u_k.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_u_k.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->u_k = u_u_k.real;
      offset += sizeof(this->u_k);
     return offset;
    }

    const char * getType(){ return "scale_truck_control/ocr2lrc"; };
    const char * getMD5(){ return "5547173125610f649bee41045fabb0de"; };

  };

}
#endif
