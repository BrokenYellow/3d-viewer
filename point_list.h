#ifndef POINT_LIST_H
#define POINT_LIST_H

#include <stdio.h>

#include "point.h"
#include "events.h"

typedef struct
{
    int len = 0;
    point_t *List = nullptr;
} point_list_t;

point_list_t init_point_list();

void free_point_list(point_list_t &points);

int import_point_list(point_list_t &points, FILE *file);

void copy_point_list(point_list_t &points, point_list_t &other);

int scan_num(int &num, FILE *file);

int alloc_point_list(point_list_t &points, int len);

int scan_point_list(point_list_t &points, FILE *file);

int move_point_list(point_list_t &points, mov_t &mov);

int scale_point_list(point_list_t &points, scl_t &scl);

int rotate_point_list(point_list_t &points, rot_t &rot);

point_t get_point(point_list_t &points, int i);

int get_points_count(point_list_t &points);

point_t *get_points_list(point_list_t &points);

#endif // POINT_LIST_H
