#ifndef _ROS_scale_truck_control_xav2lrc_h
#define _ROS_scale_truck_control_xav2lrc_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace scale_truck_control
{

  class xav2lrc : public ros::Msg
  {
    public:
      typedef float _steer_angle_type;
      _steer_angle_type steer_angle;
      typedef float _cur_dist_type;
      _cur_dist_type cur_dist;
      typedef float _tar_dist_type;
      _tar_dist_type tar_dist;
      typedef float _tar_vel_type;
      _tar_vel_type tar_vel;
      typedef bool _beta_type;
      _beta_type beta;
      typedef bool _gamma_type;
      _gamma_type gamma;

    xav2lrc():
      steer_angle(0),
      cur_dist(0),
      tar_dist(0),
      tar_vel(0),
      beta(0),
      gamma(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
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
      } u_tar_dist;
      u_tar_dist.real = this->tar_dist;
      *(outbuffer + offset + 0) = (u_tar_dist.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_tar_dist.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_tar_dist.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_tar_dist.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->tar_dist);
      union {
        float real;
        uint32_t base;
      } u_tar_vel;
      u_tar_vel.real = this->tar_vel;
      *(outbuffer + offset + 0) = (u_tar_vel.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_tar_vel.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_tar_vel.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_tar_vel.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->tar_vel);
      union {
        bool real;
        uint8_t base;
      } u_beta;
      u_beta.real = this->beta;
      *(outbuffer + offset + 0) = (u_beta.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->beta);
      union {
        bool real;
        uint8_t base;
      } u_gamma;
      u_gamma.real = this->gamma;
      *(outbuffer + offset + 0) = (u_gamma.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->gamma);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
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
      } u_tar_dist;
      u_tar_dist.base = 0;
      u_tar_dist.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_tar_dist.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_tar_dist.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_tar_dist.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->tar_dist = u_tar_dist.real;
      offset += sizeof(this->tar_dist);
      union {
        float real;
        uint32_t base;
      } u_tar_vel;
      u_tar_vel.base = 0;
      u_tar_vel.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_tar_vel.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_tar_vel.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_tar_vel.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->tar_vel = u_tar_vel.real;
      offset += sizeof(this->tar_vel);
      union {
        bool real;
        uint8_t base;
      } u_beta;
      u_beta.base = 0;
      u_beta.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->beta = u_beta.real;
      offset += sizeof(this->beta);
      union {
        bool real;
        uint8_t base;
      } u_gamma;
      u_gamma.base = 0;
      u_gamma.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->gamma = u_gamma.real;
      offset += sizeof(this->gamma);
     return offset;
    }

    const char * getType(){ return "scale_truck_control/xav2lrc"; };
    const char * getMD5(){ return "67b2d2c9b9fe241a9e49be4c7e0c1a50"; };

  };

}
#endif
