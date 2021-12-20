#include <assert.h>
#include <string>
#include <stdlib.h>
#include "evehandl.h"
#include "frame.h"
#include "events.h"
#include "errors.h"
#include "camera.h"
#include "extra.h"

int EventHandler(user_data_t &user_data)
{
    int rc = OK;
    static frame_t frm = init_frame();
    static camera_t camera = init_camera();
    static frame_t coord_sys = init_frame();
    imp_t imp;
    imp.filename = (char*)malloc(20 * sizeof(imp.filename));
    strcpy(imp.filename, "/home/default/Study/OOP/oop_Projects/oopLab_1/oopLab_1/Resources/coord_sys.txt");
    rc = import_frame(coord_sys, imp);
    assert(rc == OK);
    free(imp.filename);

    switch(user_data.event)
    {
    case event_t::IMPORT:
        rc = import_frame(frm, user_data.imp);
        break;
    case event_t::DRAW:
        rc = draw_frame(frm, user_data.gr);
        draw_coord_sys(coord_sys, user_data.gr);
        break;
    case event_t::MOVE:
        rc = move_frame(frm, user_data.mov);
        break;
    case event_t::ROTATE:
        rc = rotate_frame(frm, user_data.rot);
        break;
    case event_t::SCALE:
        rc = scale_frame(frm, user_data.scl);
        break;
    case event_t::ROTATE_CAMERA:
        rc = rotate_camera(camera, frm, coord_sys, user_data.rot_cam);
        break;
    case event_t::QUIT:
        free_frame(frm);
        break;
    default:
        rc = UNKNOWN_EVENT;
        break;
    }

    return rc;
}
