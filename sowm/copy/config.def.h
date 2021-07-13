#ifndef CONFIG_H
#define CONFIG_H

#define MOD Mod4Mask

const char* term[]    = {"stterm", 0};
const char* briup[]   = {"xbacklight", "-inc", "5+", 0};
const char* bridown[] = {"xbacklight", "-dec", "5-", 0};
const char* voldown[] = {"amixer", "sset", "Master", "5%-",         0};
const char* volup[]   = {"amixer", "sset", "Master", "5%+",         0};
const char* volmute[] = {"amixer", "sset", "Master", "toggle",      0};
const char* kill[]    = {"pkill","sowm" ,0};
const char* fire[]    = {"firefox-esr" ,0};

static struct key keys[] = {
    {MOD,      XK_z,   win_kill,   {0}},
    {MOD,      XK_Control_L,   win_center, {0}},
    {MOD,      XK_space,   win_fs,     {0}},

    {MOD,           XK_Tab, win_next,   {0}},
    {MOD|ShiftMask, XK_Tab, win_prev,   {0}},

    {MOD, XK_F1,      run, {.com = volmute}},
    {MOD, XK_F2,      run, {.com = voldown}},
    {MOD, XK_F3,      run, {.com = volup}},
    {MOD, XK_F5,      run, {.com = bridown}},
    {MOD, XK_F6,      run, {.com = briup}},
    {MOD, XK_Return,  run, {.com = term}},
    {MOD, XK_Escape,  run, {.com = kill}},
    {MOD, XK_f,       run, {.com = fire}},

    {MOD,           XK_1, ws_go,     {.i = 1}},
    {MOD|ShiftMask, XK_1, win_to_ws, {.i = 1}},
    {MOD,           XK_2, ws_go,     {.i = 2}},
    {MOD|ShiftMask, XK_2, win_to_ws, {.i = 2}},
    {MOD,           XK_3, ws_go,     {.i = 3}},
    {MOD|ShiftMask, XK_3, win_to_ws, {.i = 3}},
    {MOD,           XK_4, ws_go,     {.i = 4}},
    {MOD|ShiftMask, XK_4, win_to_ws, {.i = 4}},
    {MOD,           XK_5, ws_go,     {.i = 5}},
    {MOD|ShiftMask, XK_5, win_to_ws, {.i = 5}},
    {MOD,           XK_6, ws_go,     {.i = 6}},
    {MOD|ShiftMask, XK_6, win_to_ws, {.i = 6}},
    {MOD,           XK_7, ws_go,     {.i = 7}},
    {MOD|ShiftMask, XK_7, win_to_ws, {.i = 7}},
    {MOD,           XK_8, ws_go,     {.i = 8}},
    {MOD|ShiftMask, XK_8, win_to_ws, {.i = 8}},
    {MOD,           XK_9, ws_go,     {.i = 9}},
    {MOD|ShiftMask, XK_9, win_to_ws, {.i = 9}},
};

#endif
