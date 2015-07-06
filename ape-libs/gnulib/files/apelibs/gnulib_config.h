#ifndef GNULIB_CONFIG_H
#include "gnulib_replace.h"
#pragma lib "/$M/lib/ape/libgnu.a"

/* Manually edited file */

#define _POSIX_SOURCE 1
#define _SUSV2_SOURCE 1
#define _RESEARCH_SOURCE 1
#define _BSD_EXTENSION 1
#define _LIMITS_EXTENSION 1
#define _C99_SNPRINTF_EXTENSION 1
#define _XOPEN_SOURCE 1
#define __USE_GNU 1
#define PLAN9 1

#define GNULIB_NAMESPACE 1

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
#define HAVE_GETCWD 1
#define HAVE_DECL_STRERROR_R 1
#define HAVE_STRUCT_UTIMBUF 1
#define HAVE_WORKING_O_NOFOLLOW 0

#define _UNUSED_PARAMETER_


/* hacks */
#include <limits.h>
#define SIZE_MAX LONG_MAX
#ifndef PATH_MAX
#define PATH_MAX _POSIX_PATH_MAX
#endif
#define HOST_NAME_MAX _POSIX_NAME_MAX
typedef void* iconv_t;

/* gnulib options */
#define GNULIB_ENVIRON 1
#define GNULIB_EUIDACCESS 1
#define GNULIB_FCHDIR 1
#define GNULIB_OPENAT 1
#define GNULIB_MEMRCHR 1
#define GNULIB_ALLOCA 1
#define GNULIB_FNMATCH 1
#define GNULIB_GETGROUPS 1
#define GNULIB_GETDELIM 1
#define GNULIB_GETLINE 1
#define GNULIB_ISBLANK 1
#define GNULIB_MKNOD 1
#define GNULIB_MKSTEMP 1
#define GNULIB_MKDTEMP 1
#define GNULIB_MKOSTEMP 1
#define GNULIB_MKOSTEMPS 1
#define GNULIB_MKFIFO 1
#define GNULIB_UNSETENV 1
#define GNULIB_GROUP_MEMBER 1
#define GNULIB_NL_LANGINFO 1
/* #define GNULIB_UTIMENSAT 1 */
#define GNULIB_ICONV 1
#define REPLACE_ICONV_UTF 1
#define GNULIB_UNISTR_U8_MBTOUC 1
#define GNULIB_UNISTR_U8_UCTOMB 1
#define GNULIB_UNISTR_U8_MBTOUCR 1
#define GNULIB_BTOWC 1
#define GNULIB_WCTOB 1
#define GNULIB_MBSINIT 1
#define GNULIB_MBRTOWC 1
#define GNULIB_MBRLEN 1
#define GNULIB_MBSRTOWCS 1
#define GNULIB_MBSNRTOWCS 1
#define GNULIB_WCRTOMB 1
#define GNULIB_WCRTOMBS 1
#define GNULIB_WCSNRTOMBS 1
#define GNULIB_WCWIDTH 1
#define GNULIB_WMEMCHR 1
#define GNULIB_WMEMCMP 1
#define GNULIB_WMEMCPY 1
#define GNULIB_WMEMMOVE 1
#define GNULIB_WMEMSET 1
#define GNULIB_WCSLEN 1
#define GNULIB_WCSNLEN 1
#define GNULIB_WCSCPY 1
#define GNULIB_WCPCPY 1
#define GNULIB_WCSNCPY 1
#define GNULIB_WCPNCPY 1
#define GNULIB_WCSNCAT 1
#define GNULIB_WCSCMP 1
#define GNULIB_WCSNCMP 1
#define GNULIB_WCSCASECMP 1
#define GNULIB_WCSNCASECMP 1
#define GNULIB_WCSCOLL 1
#define GNULIB_WCSXFRM 1
#define GNULIB_WCSDUP 1
#define GNULIB_WCSCHR 1
#define GNULIB_WCSRCHR 1
#define GNULIB_WCSCSPN 1
#define GNULIB_WCSSPN 1
#define GNULIB_WCSPBRK 1
#define GNULIB_WCSSTR 1
#define GNULIB_WCSTOK 1
#define GNULIB_WCSWIDTH 1
#define GNULIB_WCTYPE 1
#define GNULIB_ISWCTYPE 1
/* #define REPLACE_ISWCNTRL 1
#define REPLACE_TOWLOWER 1 */ /* replaced by rpl_functions.c */
#define GNULIB_WCTRANS 1
#define GNULIB_TOWCTRANS 1
#define GNULIB_RANDOM 1
#define GNULIB_RANDOM_R 1
#define GNULIB_SECURE_GETENV 1
#define GNULIB_TMPDIR 1
#define GNULIB_POLL 1
#define GNULIB_STRNDUP 1
#define GNULIB_STRNLEN 1
#define GNULIB_SETHOSTNAME 1

#endif /* GNULIB_CONFIG_H */

























