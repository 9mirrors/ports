#include <sys/stat.h>
#include <sys/time.h>
#include <stdio.h>
#include <errno.h>

int mknod(const char *path, mode_t mode, dev_t dev) {
	errno=ENOSYS;
	return -1;
}

ssize_t getline(char **lineptr, size_t *n, FILE *stream) {
	errno=ENOSYS;
	return -1;
}

int unsetenv(const char *name) {
	errno=ENOSYS;
	return -1;
}

char *mkdtemp(char *template) {
	errno=ENOSYS;
	return NULL;
}

int mkstemp(char *template) {
	errno=ENOSYS;
	return -1;
}

char *realpath(const char *file_name, char *resolved_name) {
	errno=ENOSYS;
	return NULL;
}

void sync(void) {
}

int fstatat(int, const char *, struct stat *, int) {
	errno=ENOSYS;
	return -1;
}

int faccessat(int, const char *, int, int) {
	errno=ENOSYS;
	return -1;
}


int utimensat(int, const char *, const struct timespec *, int) {
	errno=ENOSYS;
	return -1;
}

/* useful functions below */

int isblank(int c) {
	return(c == ' ' || c == '\t');
}






