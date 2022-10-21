#ifndef _ROS_scale_truck_control_lrc2ocr_h
#define _ROS_scale_truck_control_lrc2ocr_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace scale_truck_control
{

  class lrc2ocr : public ros::Msg
  {
    public:
      typedef int32_t _index_type;
      _index_type index;
      typedef float _steer_angle_type;
      _steer_angle_type steer_angle;
      typedef float _cur_dist_type;
      _cur_dist_type cur_dist;
      typedef float _tar_dist_type;
      _tar_dist_type tar_dist;
      typedef float _tar_vel_type;
      _tar_vel_type tar_vel;
      typedef float _pred_vel_type;
      _pred_vel_type pred_vel;
      typedef bool _alpha_type;
      _alpha_type alpha;

    lrc2ocr():
      index(0),
      steer_angle(0),
      cur_dist(0),
      tar_dist(0),
      tar_vel(0),
      pred_vel(0),
      alpha(0)
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
        float real;
        uint32_t base;
      } u_pred_vel;
      u_pred_vel.real = this->pred_vel;
      *(outbuffer + offset + 0) = (u_pred_vel.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pred_vel.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pred_vel.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pred_vel.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pred_vel);
      union {
        bool real;
        uint8_t base;
      } u_alpha;
      u_alpha.real = this->alpha;
      *(outbuffer + offset + 0) = (u_alpha.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->alpha);
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
        float real;
        uint32_t base;
      } u_pred_vel;
      u_pred_vel.base = 0;
      u_pred_vel.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pred_vel.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pred_vel.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pred_vel.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pred_vel = u_pred_vel.real;
      offset += sizeof(this->pred_vel);
      union {
        bool real;
        uint8_t base;
      } u_alpha;
      u_alpha.base = 0;
      u_alpha.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->alpha = u_alpha.real;
      offset += sizeof(this->alpha);
     return offset;
    }

    const char * getType(){ return "scale_truck_control/lrc2ocr"; };
    const char * getMD5(){ return "4df4cc808fb5dda1620117e19736ec90"; };

  };

}
#endif
