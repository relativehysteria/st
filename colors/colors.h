#ifndef COLORS_H
#define COLORS_H

#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

/***** struct as defined by the colorscheme headers ***************************/

struct colors_t {
    float alpha;
    float alphaUnfocused;

    unsigned int defaultfg;
    unsigned int defaultbg;
    unsigned int defaultcs;
    unsigned int defaultrcs;

    const char *colorname[32];
};

/***** globals used by st *****************************************************/

/* background opacity */
float alpha;
float alphaUnfocused;

/* terminal colors */
static const char **colorname;

/* default colors (colorname index)
 * foreground, background, cursor, reverse cursor */
unsigned int defaultfg;
unsigned int defaultbg;
static unsigned int defaultcs;
static unsigned int defaultrcs;

/* whether the colorscheme can only be changed manually. */
static bool colorscheme_locked = false;

#include "interspectre.h"
#include "papertheme.h"

#endif /* COLORS_H */
