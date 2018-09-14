#include <sys/types.h>
#include <sys/time.h>

int
setitimer(int which, const struct itimerval *new, struct itimerval *curr)
{
	return -1;
}

int
getitimer(int which, struct itimerval *curr)
{
	return -1;
}
