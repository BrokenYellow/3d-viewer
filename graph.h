#ifndef GRAPH_H
#define GRAPH_H

#include "events.h"

int init_gr(gr_t &gr);

void free_gr(gr_t &gr);

void get_gr_geometry(gr_t &gr);

void set_scene_rect(gr_t &gr);

void set_scene(gr_t &gr);

void clear_scene(gr_t &gr);

#endif // GRAPH_H
