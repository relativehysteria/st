#ifndef COLORS_H
#define COLORS_H

/***** globals used by st *****/

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


/***** struct as defined by the colorscheme headers *****/
struct colors_t {
    float alpha;
    float alphaUnfocused;

    unsigned int defaultfg;
    unsigned int defaultbg;
    unsigned int defaultcs;
    unsigned int defaultrcs;

    const char *colorname[32];
};

#include "interspectre.h"
#include "papertheme.h"

#endif /* COLORS_H */
