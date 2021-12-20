#include <QMessageBox>
#include "errors.h"

void show_err_msg(int errcode)
{
    switch(errcode)
    {
    case IO_ERR:
        QMessageBox::warning(NULL, "Error", "I/O Error");
        break;
    case MEM_ALLOC_ERR:
        QMessageBox::warning(NULL, "Error", "Memory Allocation Error");
        break;
    case EMPTY_ERR:
        QMessageBox::warning(NULL, "Error", "Empty Error");
        break;
    case UNKNOWN_EVENT:
        QMessageBox::warning(NULL, "Error", "Unknown Event");
        break;
    case FO_ERR:
        QMessageBox::warning(NULL, "Error", "Error While Opening File");
        break;
    case RANGE_ERR:
        QMessageBox::warning(NULL, "Error", "Range Error");
        break;
    case SCENE_EMPTY_ERR:
        QMessageBox::warning(NULL, "Error", "Scene Not Found");
        break;
    default:
        QMessageBox::warning(NULL, "Error", "Unknown Error");
        break;
    }
}
