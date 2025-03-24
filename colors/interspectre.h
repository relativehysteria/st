#ifndef INTERSPECTRE_H
#define INTERSPECTRE_H

#include "colors.h"

static struct colors_t interspectre = {
    .alpha = 0.8,
    .alphaUnfocused = 0.7,

    .defaultfg = 7,
    .defaultbg = 0,
    .defaultcs = 30,
    .defaultrcs = 31,

    .colorname = {
        "#000000",
        "#8E273E",
        "#308E64",
        "#AF9149",
        "#4452AF",
        "#A744AF",
        "#2EA2AD",
        "#AB8AD1",

        "#444444",
        "#AD2240",
        "#2EAA72",
        "#CCA449",
        "#4F60CC",
        "#C042C9",
        "#2DB7C4",
        "#AD8CD3",

        [29] = "#000000",

        "#CCCCCC",
        "#555555",
    },
};

#endif /* INTERSPECTRE_H */
