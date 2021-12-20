#include <stdio.h>
#include <math.h>
#include <QColor>

#include "events.h"
#include "point.h"
#include "errors.h"
#include "draw.h"

void move_point(point_t &p, mov_t &mov)
{
    p.x += mov.dX;
    p.y += mov.dY;
    p.z += mov.dZ;
}

void scale_point(point_t &p, scl_t &scl)
{
    p.x = p.x * scl.kX + (1 - scl.kX) * scl.center.x;
    p.y = p.y * scl.kY + (1 - scl.kY) * scl.center.y;
    p.z = p.z * scl.kZ + (1 - scl.kZ) * scl.center.z;
}

float to_radians(float ang)
{
    return ang * M_PI / 180;
}

void rotate_point_OX(point_t &p, rot_t &rot)
{
    float Sin = sin(to_radians(rot.OX));
    float Cos = cos(to_radians(rot.OX));
    float y = p.y;

    p.y = p.y * Cos + p.z * Sin + (1 - Cos) * rot.center.y - rot.center.z * Sin;
    p.z = - y * Sin + p.z * Cos + rot.center.y * Sin + (1 - Cos) * rot.center.z;
}

void rotate_point_OY(point_t &p, rot_t &rot)
{
    float Sin = sin(to_radians(rot.OY));
    float Cos = cos(to_radians(rot.OY));
    float x = p.x;

    p.x = p.x * Cos + p.z * Sin + (1 - Cos) * rot.center.z - rot.center.x * Sin;
    p.z = - x * Sin + p.z * Cos + rot.center.z * Sin + (1 - Cos) * rot.center.x;
}

void rotate_point_OZ(point_t &p, rot_t &rot)
{
    float Sin = sin(to_radians(rot.OZ));
    float Cos = cos(to_radians(rot.OZ));
    float x = p.x;

    p.x = p.x * Cos + p.y * Sin + (1 - Cos) * rot.center.x - rot.center.y * Sin;
    p.y = - x * Sin + p.y * Cos + rot.center.x * Sin + (1 - Cos) * rot.center.y;
}

void rotate_point(point_t &p, rot_t &rot)
{
    rotate_point_OX(p, rot);
    rotate_point_OY(p, rot);
    rotate_point_OZ(p, rot);
}

int draw_line(point_t &p1, point_t &p2, gr_t &gr)
{
    return draw_line(p1.x, p1.y, p2.x, p2.y, gr);
}

int draw_line_color(point_t &p1, point_t &p2, gr_t &gr, QColor color)
{
    return draw_line_color(p1.x, p1.y, p2.x, p2.y, gr, color);
}
