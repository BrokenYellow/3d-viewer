#include <stdio.h>
#include "edge_list.h"
#include "point_list.h"
#include "errors.h"

edge_list_t init_edge_list()
{
    edge_list_t edges;
    edges.len = 0;
    edges.List = nullptr;
    return edges;
}

void free_edge_list(edge_list_t &edges)
{
    delete [] edges.List;
    edges.List = nullptr;
    edges.len = 0;
}

void copy_edge_list(edge_list_t &edges, edge_list_t &other)
{
    edges.len = other.len;
    edges.List = other.List;
}

int import_edge_list(edge_list_t &edges, FILE *file)
{
    int rc = OK;
    int len;

    rc = scan_num(len, file);
    if (rc != OK)
        return rc;

    rc = alloc_edge_list(edges, len);
    if (rc == OK)
    {
        rc = scan_edge_list(edges, file);
        if (rc != OK)
            free_edge_list(edges);
    }

    return rc;
}

int alloc_edge_list(edge_list_t &edges, int len)
{
    edge_t *tmp = new edge_t[len];
    if (!tmp)
        return MEM_ALLOC_ERR;

    edges.List = tmp;
    edges.len = len;

    return OK;
}

int scan_edge_list(edge_list_t &edges, FILE *file)
{
    int rc = OK;
    for (int i = 0; i < edges.len && rc == OK; i++)
    {
        if (fscanf(file, "%d%d", &edges.List[i].p1, &edges.List[i].p2) != 2)
            rc = IO_ERR;
    }
    return rc;
}

int get_edges_count(edge_list_t &edges)
{
    return edges.len;
}

edge_t *get_edges_list(edge_list_t &edges)
{
    return edges.List;
}

int get_edge_p1(edge_list_t &edges, int i)
{
    return edges.List[i].p1;
}

int get_edge_p2(edge_list_t &edges, int i)
{
    return edges.List[i].p2;
}
