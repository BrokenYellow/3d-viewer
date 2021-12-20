#ifndef EVEHANDL_H
#define EVEHANDL_H

#include "events.h"

typedef struct
{
    float latit, longit; // latitude and longitude
} camera_t;

typedef enum
{
    IMPORT,
    DRAW,
    MOVE,
    ROTATE,
    SCALE,
    ROTATE_CAMERA,
    QUIT
} event_t;

typedef struct
{
    event_t event;
    union
    {
        imp_t imp;
        gr_t gr;
        mov_t mov;
        rot_t rot;
        scl_t scl;
        rot_cam_t rot_cam;
    };
} user_data_t;

int EventHandler(user_data_t &user_data);

#endif // EVEHANDL_H
