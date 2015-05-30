/* See LICENSE file for copyright and license details. */
#include <limits.h>

#ifndef HOST_NAME_MAX
#define HOST_NAME_MAX _POSIX_HOST_NAME_MAX
#endif

/* Plan9 hacks */

#include <gnulib_config.h>
#include <fmemopen.h>

#define PATH_MAX _POSIX_PATH_MAX
#define NAME_MAX _POSIX_NAME_MAX
#define LLONG_MAX LONG_MAX
#define LLONG_MIN LONG_MIN

#define lchown chown
#define PRIu32 "lu"
#define intmax_t int32_t
#define uintmax_t uint32_t

#define st_rdev st_dev

char *realpath(const char*, char *);
#define strtold strtod
void sync(void);
#define llabs labs
#define utimes utime
#define SIGURG /*nothing*/

#define strndup(s, n) strdup(s)

int utimensat(int, const char *, const struct timespec *, int);
/* struct stat does not have atim and mtim */
#include <time.h>
#include <sys/stat.h>
struct timespec _atim;
struct timespec _mtim;



