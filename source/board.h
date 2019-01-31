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

struct WormSpace{
    struct WormSpace *n, *ne, *se, *s, *sw, *nw;
    bool has_worm;
};

struct BoardSpace{
    struct HexSpace *n, *ne, *se, *s, *sw, *nw;
    enum SpaceType type;
    bool spice;
};

struct BoardParams{
    int width, height;
    int worm_density;
    int worm_buffer;
};

// Returns pointer to space where player currently "is" (starting sietch)
struct HexSpace* InitBoard(struct BoardParams params);
