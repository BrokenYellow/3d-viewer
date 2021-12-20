#ifndef POINT_H
#define POINT_H

#include "events.h"

void move_point(point_t &p, mov_t &mov);

void scale_point(point_t &p, scl_t &scl);

void rotate_point_OX(point_t &p, rot_t &rot);

void rotate_point_OY(point_t &p, rot_t &rot);

void rotate_point_OZ(point_t &p, rot_t &rot);

void rotate_point(point_t &p, rot_t &rot);

int draw_line(point_t &p1, point_t &p2, gr_t &gr);

float to_radians(float ang);

int draw_line_color(point_t &p1, point_t &p2, gr_t &gr, QColor color);

#endif // POINT_H
