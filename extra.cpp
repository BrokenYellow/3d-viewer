#include <QColor>
#include "frame.h"
#include "draw.h"
#include "graph.h"
#include "errors.h"
#include "point.h"

int draw_coord_sys(frame_t &coord_sys, gr_t &gr)
{
    int rc = init_gr(gr);
    if (rc != OK)
        return rc;

    QColor colors[3] = { Qt::red, Qt::green, Qt::blue };

    int e_count = get_edges_count(coord_sys);
    point_t p1, p2;
    int ind1, ind2;
    for (int i = 0; i < e_count && rc == OK; i++)
    {
        ind1 = get_edge_p1(coord_sys, i);
        ind2 = get_edge_p2(coord_sys, i);
        p1 = get_point(coord_sys, ind1);
        p2 = get_point(coord_sys, ind2);
        rc = draw_line_color(p1, p2, gr, colors[i]);
    }
    set_scene_rect(gr);
    return rc;
}
