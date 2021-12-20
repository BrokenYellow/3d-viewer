#ifndef FRAME_H
#define FRAME_H

#include "point_list.h"
#include "edge_list.h"
#include "events.h"

typedef struct
{
    point_list_t points;
    edge_list_t edges;
} frame_t;

frame_t init_frame();

void free_frame(frame_t &frm);

void copy_frame(frame_t &frm, frame_t &other);

int import_frame(frame_t &frm, imp_t &imp);

int move_frame(frame_t &frm, mov_t &mov);

int rotate_frame(frame_t &frm, rot_t &rot);

int scale_frame(frame_t &frm, scl_t &scl);

int draw_frame(frame_t &frm, gr_t &gr);

int get_edges_count(frame_t &frm);

int get_edge_p1(frame_t &frm, int i);

int get_edge_p2(frame_t &frm, int i);

point_t get_point(frame_t &frm, int i);

#endif // FRAME_H
