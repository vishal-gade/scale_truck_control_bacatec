#ifndef _ROS_scale_truck_control_ctl_h
#define _ROS_scale_truck_control_ctl_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace scale_truck_control
{

  class ctl : public ros::Msg
  {
    public:
      typedef int32_t _index_type;
      _index_type index;
      typedef int32_t _sync_type;
      _sync_type sync;
      typedef float _ref_dist_type;
      _ref_dist_type ref_dist;
      typedef float _cur_dist_type;
      _cur_dist_type cur_dist;
      typedef float _send_vel_type;
      _send_vel_type send_vel;
      typedef float _steer_angle_type;
      _steer_angle_type steer_angle;

    ctl():
      index(0),
      sync(0),
      ref_dist(0),
      cur_dist(0),
      send_vel(0),
      steer_angle(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_index;
      u_index.real = this->index;
      *(outbuffer + offset + 0) = (u_index.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_index.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_index.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_index.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->index);
      union {
        int32_t real;
        uint32_t base;
      } u_sync;
      u_sync.real = this->sync;
      *(outbuffer + offset + 0) = (u_sync.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_sync.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_sync.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_sync.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->sync);
      union {
        float real;
        uint32_t base;
      } u_ref_dist;
      u_ref_dist.real = this->ref_dist;
      *(outbuffer + offset + 0) = (u_ref_dist.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_ref_dist.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_ref_dist.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_ref_dist.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->ref_dist);
      union {
        float real;
        uint32_t base;
      } u_cur_dist;
      u_cur_dist.real = this->cur_dist;
      *(outbuffer + offset + 0) = (u_cur_dist.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_cur_dist.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_cur_dist.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_cur_dist.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->cur_dist);
      union {
        float real;
        uint32_t base;
      } u_send_vel;
      u_send_vel.real = this->send_vel;
      *(outbuffer + offset + 0) = (u_send_vel.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_send_vel.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_send_vel.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_send_vel.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->send_vel);
      union {
        float real;
        uint32_t base;
      } u_steer_angle;
      u_steer_angle.real = this->steer_angle;
      *(outbuffer + offset + 0) = (u_steer_angle.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_steer_angle.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_steer_angle.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_steer_angle.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->steer_angle);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_index;
      u_index.base = 0;
      u_index.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_index.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_index.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_index.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->index = u_index.real;
      offset += sizeof(this->index);
      union {
        int32_t real;
        uint32_t base;
      } u_sync;
      u_sync.base = 0;
      u_sync.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_sync.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_sync.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_sync.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->sync = u_sync.real;
      offset += sizeof(this->sync);
      union {
        float real;
        uint32_t base;
      } u_ref_dist;
      u_ref_dist.base = 0;
      u_ref_dist.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_ref_dist.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_ref_dist.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_ref_dist.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->ref_dist = u_ref_dist.real;
      offset += sizeof(this->ref_dist);
      union {
        float real;
        uint32_t base;
      } u_cur_dist;
      u_cur_dist.base = 0;
      u_cur_dist.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_cur_dist.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_cur_dist.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_cur_dist.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->cur_dist = u_cur_dist.real;
      offset += sizeof(this->cur_dist);
      union {
        float real;
        uint32_t base;
      } u_send_vel;
      u_send_vel.base = 0;
      u_send_vel.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_send_vel.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_send_vel.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_send_vel.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->send_vel = u_send_vel.real;
      offset += sizeof(this->send_vel);
      union {
        float real;
        uint32_t base;
      } u_steer_angle;
      u_steer_angle.base = 0;
      u_steer_angle.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_steer_angle.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_steer_angle.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_steer_angle.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->steer_angle = u_steer_angle.real;
      offset += sizeof(this->steer_angle);
     return offset;
    }

    const char * getType(){ return "scale_truck_control/ctl"; };
    const char * getMD5(){ return "aeae4ea0b1351c14854fc269821a1613"; };

  };

}
#endif
