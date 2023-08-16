#pragma once

#include "quantum.h"

#define ___ KC_NO

#define LAYOUT( \
         k01, k02, k03, k04,      \
    k10, k11, k12, k13, k14, k15, \
    k20, k21, k22, k23, k24, k25, \
    k30, k31, k32, k33, k34, k35, \
    k40, k41, k42, k43, k44, k45, \
         k51, k52, k53, k54       \
) \
{ \
    { ___, k01, k02, k03, k04, ___ },  \
    { k10, k11, k12, k13, k14, k15 },  \
    { k20, k21, k22, k23, k24, k25 },  \
    { k30, k31, k32, k33, k34, k35 },  \
    { k40, k41, k42, k43, k44, k45 },  \
    { ___, k51, k52, k53, k54, ___ }   \
}

#define LAYOUT_cadam( \
         k01, k02, k03, k04,      \
    k10, k11, k12, k13, k14, k15, \
    k20, k21, k22, k23, k24, k25, \
    k30, k31, k32, k33, k34, k35, \
    k40, k41, k42, k43, k44, k45, \
         k51, k52, k53, k54       \
) \
{ \
    { ___, k01, k02, k03, k04, ___ },  \
    { k10, k11, k12, k13, k14, k15 },  \
    { k20, k21, k22, k23, k24, k25 },  \
    { k30, k31, k32, k33, k34, k35 },  \
    { k40, k41, k42, k43, k44, k45 },  \
    { ___, k51, k52, k53, k54, ___ }   \
}

void matrix_init_user(void);
void matrix_scan_user(void);