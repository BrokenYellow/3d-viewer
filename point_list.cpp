#include <stdio.h>

#include "point_list.h"
#include "errors.h"

point_list_t init_point_list()
{
    point_list_t points;
    points.List = nullptr;
    points.len = 0;
    return points;
}

void free_point_list(point_list_t &points)
{
    delete [] points.List;
    points.List = nullptr;
    points.len = 0;
}

void copy_point_list(point_list_t &points, point_list_t &other)
{
    points.len = other.len;
    points.List = other.List;
}

int import_point_list(point_list_t &points, FILE *file)
{
    int rc = OK;
    int len;

    rc = scan_num(len, file);
    if (rc != OK)
        return rc;

    rc = alloc_point_list(points, len);
    if (rc == OK)
    {
        rc = scan_point_list(points, file);
        if (rc != OK)
            free_point_list(points);
    }
    return rc;
}

int scan_num(int &num, FILE *file)
{
    int rc = OK;
    if (fscanf(file, "%d", &num) == 1)
    {
        if (num < 0)
            rc = RANGE_ERR;
    }
    else
        rc = IO_ERR;
    return rc;
}

int alloc_point_list(point_list_t &points, int len)
{
    point_t *tmp = new point_t[len];
    if (!tmp)
        return MEM_ALLOC_ERR;

    points.List = tmp;
    points.len = len;
    return OK;
}

int scan_point_list(point_list_t &points, FILE *file)
{
    int rc = OK;
    for (int i = 0; i < points.len && rc == OK; i++)
    {
        if (fscanf(file, "%f%f%f", &points.List[i].x, &points.List[i].y, &points.List[i].z) != 3)
            rc = IO_ERR;
    }
    return rc;
}

int move_point_list(point_list_t &points, mov_t &mov)
{
    if (!points.List)
        return EMPTY_ERR;

    for (int i = 0; i < points.len; i++)
        move_point(points.List[i], mov);

    return OK;
}

int scale_point_list(point_list_t &points, scl_t &scl)
{
    if (!points.List)
        return EMPTY_ERR;

    for (int i = 0; i < points.len; i++)
        scale_point(points.List[i], scl);

    return OK;
}

int rotate_point_list(point_list_t &points, rot_t &rot)
{
    if (!points.List)
        return EMPTY_ERR;

    for (int i = 0; i < points.len; i++)
        rotate_point(points.List[i], rot);

    return OK;
}

point_t get_point(point_list_t &points, int i)
{
    return points.List[i];
}

int get_points_count(point_list_t &points)
{
    return points.len;
}

point_t *get_points_list(point_list_t &points)
{
    return points.List;
}
