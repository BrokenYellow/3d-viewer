#ifndef EVENTS_H
#define EVENTS_H

#include <QGraphicsView>

typedef struct
{
    float x;
    float y;
    float z;
} point_t;

typedef struct
{
    char *filename;
} imp_t;

typedef struct
{
    float dX, dY, dZ;
} mov_t;

typedef struct
{
    point_t center;
    float OX, OY, OZ;
} rot_t;

typedef struct
{
    point_t center;
    float kX, kY, kZ;
} scl_t;

typedef struct
{
    float dLatit, dLongit; // latitude and longitude
} rot_cam_t;

typedef struct
{
    QGraphicsView *gr_view;
    QGraphicsScene *scene;
    int w;
    int h;
} gr_t;

#endif // EVENTS_H
