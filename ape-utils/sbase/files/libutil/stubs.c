#include <sys/stat.h>
#include <sys/time.h>
#include <stdio.h>
#include <errno.h>

char *realpath(const char *file_name, char *resolved_name) {
	errno=ENOSYS;
	return NULL;
}

void sync(void) {
}


int utimensat(int, const char *, const struct timespec *, int) {
	errno=ENOSYS;
	return -1;
}







