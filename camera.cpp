#include <math.h>
#include "camera.h"
#include "frame.h"
#include "evehandl.h"
#include "errors.h"
#include "point.h"

camera_t init_camera()
{
    camera_t camera;
    return camera;
}

int rotate_camera(camera_t &camera, frame_t &frm, frame_t &coord_sys, rot_cam_t &rot_cam)
{
    camera.latit += rot_cam.dLatit;
    camera.longit += rot_cam.dLongit;

    float x, y, z;
    float sin_a = sin(to_radians(rot_cam.dLongit)), cos_a = cos(to_radians(rot_cam.dLongit));
    float sin_b = sin(to_radians(rot_cam.dLatit)), cos_b = cos(to_radians(rot_cam.dLatit));
    for (int i = 0; i < frm.points.len; i++){
        x = frm.points.List[i].x;
        y = frm.points.List[i].y;
        z = frm.points.List[i].z;
        frm.points.List[i].x = x * cos_a - y * sin_a;
        frm.points.List[i].y = x * sin_a * cos_b + y * cos_a * cos_b - z * sin_b;
        frm.points.List[i].z = x * sin_a * sin_b + y * cos_a * sin_b + z * cos_b;
    }

    for (int i = 0; i < coord_sys.points.len; i++){
        x = coord_sys.points.List[i].x;
        y = coord_sys.points.List[i].y;
        z = coord_sys.points.List[i].z;
        coord_sys.points.List[i].x = x * cos_a - y * sin_a;
        coord_sys.points.List[i].y = x * sin_a * cos_b + y * cos_a * cos_b - z * sin_b;
        coord_sys.points.List[i].z = x * sin_a * sin_b + y * cos_a * sin_b + z * cos_b;
    }

    return OK;
}
