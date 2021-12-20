#ifndef ERRORS_H
#define ERRORS_H

#define OK 0
#define IO_ERR 1
#define MEM_ALLOC_ERR 2
#define EMPTY_ERR 3
#define UNKNOWN_EVENT 4
#define FO_ERR 5
#define RANGE_ERR 6
#define SCENE_EMPTY_ERR 7

void show_err_msg(int errcode);

#endif // ERRORS_H
