#ifndef PAPERTHEME_H
#define PAPERTHEME_H

#include "colors.h"

static struct colors_t papertheme = {
    .alpha = 0.9,
    .alphaUnfocused = 0.5,

    .defaultfg = 0,
    .defaultbg = 7,
    .defaultcs = 30,
    .defaultrcs = 31,

    .colorname = {
        "#000000",
        "#CC3E28",
        "#216609",
        "#B58900",
        "#1E6FCC",
        "#5C21A5",
        "#158C86",
        "#DADADA",

        "#555555",
        "#CC3E28",
        "#216609",
        "#B58900",
        "#1E6FCC",
        "#5C21A5",
        "#158C86",
        "#AAAAAA",

        [29] = 0,

        "#F2EEDE",
        "#000000",
    },
};

#endif /* PAPERTHEME_H */
