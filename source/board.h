/*******************************************************************************
* Data and functions for game board and worms
*******************************************************************************/

#include <stdbool.h>

enum HexDir{N, NE, SE, S, SW, NW};
enum SpaceType{
    SAND,
    BUSH,
    SIETCH,
};
struct HexSpace{
    struct HexSpace *n, *ne, *se, *s, *sw, *nw;
    enum SpaceType type;
    bool spice;
};
