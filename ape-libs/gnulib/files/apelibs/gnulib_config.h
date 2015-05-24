/* Manually edited file */

#define _POSIX_SOURCE 1
#define _SUSV2_SOURCE 1

/* headers provided by APE */
#define HAVE_AR_H 1
#define HAVE_ASSERT_H 1
#define HAVE_CTYPE_H 1
#define HAVE_DIRENT_H 1
#define HAVE_ERRNO_H 1
#define HAVE_FCNTL_H 1
#define HAVE_GRP_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_LIMITS_H 1
#define HAVE_PWD_H 1
#define HAVE_REGEXP_H 1
#define HAVE_SELECT_H 1
#define HAVE_SETJMP_H 1
#define HAVE_SIGNAL_H 1
#define HAVE_STDDEF_H 1
#define HAVE_STDIO_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRING_H 1
#define HAVE_TERMIOS_H 1
#define HAVE_TIME_H 1
#define HAVE_UNISTD_H 1
#define HAVE_UTIME_H 1
#define HAVE_ARPA_INET_H 1
#define HAVE_NETINET_IN_H 1
#define HAVE_NETINET_TCP_H 1
#define HAVE_SYS_IOCTL_H 1
#define HAVE_SYS_LIMITS_H 1
#define HAVE_SYS_PARAM_H 1
#define HAVE_SYS_PTY_H 1
#define HAVE_SYS_RESOURCE_H 1
#define HAVE_SYS_SELECT_H 1
#define HAVE_SYS_SOCKET_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_SYS_TIME_H 1
#define HAVE_SYS_TIMES_H 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_SYS_UIO_H 1
#define HAVE_SYS_UN_H 1
#define HAVE_SYS_UTSNAME_H 1
#define HAVE_SYS_WAIT_H 1
#define HAVE_FLOAT_H 1
#define HAVE_MATH_H 1
#define HAVE_STDARG_H 1
#define HAVE_UREG_H 1


/* functions provided by APE */
#define HAVE_DECL_GETENV 1
#undef HAVE_DECL_STRNDUP
#undef HAVE_DECL_STRNLEN
#undef HAVE_GETOPT_LONG_ONLY
#undef HAVE_STRNDUP
#undef HAVE_STRSEP
#undef restrict
#define _Restrict
#define _UNUSED_PARAMETER_


/* hacks */
#include <limits.h>
#define SIZE_MAX LONG_MAX
#include <errno.h>
#define EOVERFLOW ENOMEM


/* gnulib options */
#define GNULIB_ENVIRON 1























