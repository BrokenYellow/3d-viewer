#ifndef DRAW_H
#define DRAW_H

#include <QColor>
#include "point.h"
#include "events.h"

int draw_line(float x1, float y1, float x2, float y2, gr_t &gr);
int draw_line_color(float x1, float y1, float x2, float y2, gr_t &gr, QColor color);

#endif // DRAW_H
