#ifndef __dead
#define __dead
#endif

#ifndef __printflike
#define __printflike(n, m) __attribute__((format(printf, n, m)))
#endif

#ifndef explicit_memset
#define explicit_memset(a, b, c) explicit_bzero(a, c)
#endif

#if defined(__linux__) || defined(__midipix__)
extern const char *__progname;
#define getprogname() __progname
#endif

#include <sys/time.h>
