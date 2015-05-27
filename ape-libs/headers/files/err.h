/* 
 * Public domain 
 * err.h compatibility stub
 * libressl has a nice shim header
 * but the redefinitions do not work on Plan9
 */ 

#ifndef ERR_H
#ifndef COMPAT_ERR_H 
#define COMPAT_ERR_H 

#include <errno.h> 
#include <stdio.h> 
#include <string.h> 

#define err(...)  /* ? */

#define errx(...) /* ? */ 

#define warn(...) /* ? */

#define warnx(...) /* ? */

#endif /* COMPAT_ERR_H */
#endif /* ERR_H */





