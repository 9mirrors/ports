#include <errno.h>

void errx(int, const char *, ...) {}

void err(int, const char *, ...) {}

void warnx(const char *, ...) {}

void warn(const char *, ...) {}

int mkstemp(char *template) {
	errno=ENOSYS;
	return -1;
}


