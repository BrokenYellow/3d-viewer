#include "frame.h"
#include "point_list.h"
#include "edge_list.h"
#include "errors.h"
#include "evehandl.h"
#include "draw.h"
#include "graph.h"
#include "extra.h"

frame_t init_frame()
{
    frame_t frm;
    frm.points = init_point_list();
    frm.edges = init_edge_list();
    return frm;
}

void free_frame(frame_t &frm)
{
    free_point_list(frm.points);
    free_edge_list(frm.edges);
}

void copy_frame(frame_t &frm, frame_t &other)
{
    copy_point_list(frm.points, other.points);
    copy_edge_list(frm.edges, other.edges);
}

int import_frame(frame_t &frm, imp_t &imp)
{
    FILE *file = fopen(imp.filename, "r");
    if (!file)
        return FO_ERR;

    int rc = OK;
    frame_t frm_tmp = init_frame();
    rc = import_point_list(frm_tmp.points, file);
    if (rc == OK)
    {
        rc = import_edge_list(frm_tmp.edges, file);
        if (rc != OK)
            free_point_list(frm.points);
    }

    fclose(file);

    if (rc == OK)
    {
        free_frame(frm);
        copy_frame(frm, frm_tmp); // move
    }

    return rc;
}

int move_frame(frame_t &frm, mov_t &mov)
{
    return move_point_list(frm.points, mov);
}

int rotate_frame(frame_t &frm, rot_t &rot)
{
    return rotate_point_list(frm.points, rot);
}

int scale_frame(frame_t &frm, scl_t &scl)
{
    return scale_point_list(frm.points, scl);
}

int draw_frame(frame_t &frm, gr_t &gr)
{
    int rc = init_gr(gr);
    if (rc != OK)
        return rc;

    set_scene(gr);
    clear_scene(gr);
    int e_count = get_edges_count(frm);
    point_t p1, p2;
    int ind1, ind2;
    for (int i = 0; i < e_count && rc == OK; i++)
    {
        ind1 = get_edge_p1(frm, i);
        ind2 = get_edge_p2(frm, i);
        p1 = get_point(frm, ind1);
        p2 = get_point(frm, ind2);
        rc = draw_line(p1, p2, gr);
    }
    set_scene_rect(gr);
    return rc;
}

int get_edges_count(frame_t &frm)
{
    return get_edges_count(frm.edges);
}

int get_edge_p1(frame_t &frm, int i)
{
    return get_edge_p1(frm.edges, i);
}

int get_edge_p2(frame_t &frm, int i)
{
    return get_edge_p2(frm.edges, i);
}

point_t get_point(frame_t &frm, int i)
{
    return get_point(frm.points, i);
}
