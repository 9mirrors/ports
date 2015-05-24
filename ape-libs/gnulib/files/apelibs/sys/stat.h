#ifndef GNULIB_SYS_STAT_H
#define GNULIB_SYS_STAT_H

#pragma lib "/$M/lib/ape/libgnu.a"

#include "/sys/include/ape/sys/stat.h"

int mknod(const char*, mode_t, dev_t);
int fstatat(int, const char *, struct stat *, int);

#endif


