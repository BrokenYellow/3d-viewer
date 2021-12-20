#ifndef EDGE_LIST_H
#define EDGE_LIST_H

#include <stdio.h>

typedef struct
{
    int p1;
    int p2;
} edge_t;

typedef struct
{
    int len = 0;
    edge_t *List = nullptr;
} edge_list_t;

edge_list_t init_edge_list();

void free_edge_list(edge_list_t &edges);

void copy_edge_list(edge_list_t &edges, edge_list_t &other);

int import_edge_list(edge_list_t &edges, FILE *file);

int alloc_edge_list(edge_list_t &edges, int len);

int scan_edge_list(edge_list_t &edges, FILE *file);

int get_edges_count(edge_list_t &edges);

edge_t *get_edges_list(edge_list_t &edges);

int get_edge_p1(edge_list_t &edges, int i);

int get_edge_p2(edge_list_t &edges, int i);

#endif // EDGE_LIST_H
