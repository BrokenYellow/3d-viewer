#ifndef CAMERA_H
#define CAMERA_H

#include "evehandl.h"
#include "frame.h"

camera_t init_camera();
int rotate_camera(camera_t &camera, frame_t &frm, frame_t &coord_sys,  rot_cam_t &rot_cam);

#endif // CAMERA_H
