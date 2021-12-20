#include <QGraphicsView>
#include <QColor>

#include "draw.h"
#include "point.h"
#include "errors.h"
#include "graph.h"

int draw_line(float x1, float y1, float x2, float y2, gr_t &gr)
{
    if (!gr.scene)
        return SCENE_EMPTY_ERR;
    gr.scene->addLine(x1, y1, x2, y2, QPen(QColor(195, 241, 3), 4));
    return OK;
}

int draw_line_color(float x1, float y1, float x2, float y2, gr_t &gr, QColor color)
{
    if (!gr.scene)
        return SCENE_EMPTY_ERR;
    gr.scene->addLine(x1, y1, x2, y2, QPen(QColor(color), 4));
    return OK;
}
