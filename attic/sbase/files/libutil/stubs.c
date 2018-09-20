#include <sys/stat.h>
#include <sys/time.h>
#include <stdio.h>
#include <errno.h>

void sync(void) {
	errno=ENOSYS;
}


int utimensat(int, const char *, const struct timespec *, int) {
	errno=ENOSYS;
	return -1;
}








