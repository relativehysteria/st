#ifndef INTERSPECTRE_H
#define INTERSPECTRE_H

#include "colors.h"

static struct colors_t interspectre = {
    .name = "interspectre",

    .alpha = 0.8,
    .alphaUnfocused = 0.7,

    .defaultfg = 7,
    .defaultbg = 0,
    .defaultcs = 30,
    .defaultrcs = 31,

    .colorname = {
        "#000000",
        "#8e273e",
        "#308e64",
        "#af9149",
        "#4452af",
        "#a744af",
        "#2ea2ad",
        "#ab8ad1",

        "#444444",
        "#ad2240",
        "#2eaa72",
        "#cca449",
        "#4f60cc",
        "#c042c9",
        "#2db7c4",
        "#ad8cd3",

        [29] = 0,
        "#cccccc",
        "#555555",
    },
};

#endif /* INTERSPECTRE_H */
