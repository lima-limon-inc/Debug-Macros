#ifndef DEBUGDEFS_H
#define DEBUGDEFS_H


// Source: https://stackoverflow.com/a/1941337/13683575
#ifdef DEBUG
# define DEBUG_PRINT(x) printf x
#else
# define DEBUG_PRINT(x) do {} while (0)
#endif

// Source: https://stackoverflow.com/a/1941337/13683575
#ifdef VERBOSE
# define VERBOSE_PRINT(x) printf x
#else
# define VERBOSE_PRINT(x) do {} while (0)
#endif

#endif
