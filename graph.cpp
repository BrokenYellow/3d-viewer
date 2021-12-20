#include "graph.h"
#include "events.h"
#include "errors.h"

int init_gr(gr_t &gr)
{
    int rc = OK;
    gr.scene = new QGraphicsScene;
    if (!gr.scene)
        rc = MEM_ALLOC_ERR;
    return rc;
}

void free_gr(gr_t &gr)
{
    delete gr.scene;
    gr.scene = nullptr;
}

void get_gr_geometry(gr_t &gr)
{
    gr.w = gr.gr_view->geometry().width()-2;
    gr.h = gr.gr_view->geometry().height()-2;
}

void set_scene_rect(gr_t &gr)
{
    get_gr_geometry(gr);
    gr.scene->setSceneRect(QRect(QPoint(-gr.w/2, -gr.h/2), QPoint(gr.w/2, gr.h/2)));
}

void set_scene(gr_t &gr)
{
    gr.gr_view->setScene(gr.scene);
}

void clear_scene(gr_t &gr)
{
    gr.scene->clear();
}
