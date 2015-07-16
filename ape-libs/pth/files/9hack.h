/* this header is here for persistent (re-)definitions needed to build Pth on Plan9/APE. The header is included at the top of pth_p.h */

/* Plan9 hacks: */

#define ECONNRESET ECONNABORTED
#define PLAN9 1



