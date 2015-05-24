
#include <gnulib_config.h>

#define PACKAGE gnulib
#define VERSION 20140202

#define _GL_EXTERN_C extern
#define _GL_FUNCDECL_SYS(func, rettype, parameters) rettype func parameters
#define _GL_FUNCDECL_RPL(rpl_func, rettype, parameters) rettype rpl_func parameters /* also in unistd.h */

#define _GL_CXXALIAS_SYS_CAST(func, rettype, parameters) _gl_cxxalias_dummy
/* #define _GL_CXXALIAS_SYS
#define _GL_CXXALIAS_RPL
#define _GL_CXXALIASWARN */

#define _GL_WARN_ON_USE(func, message) /* ? also in unistd.h */
#define _GL_ARG_NONNULL(params) /*also in unistd.h */
#define _GL_UNUSED /*nothing*/
#define _GL_INLINE /*nothing*/
#define _GL_INLINE_HEADER_BEGIN /* nothing */ 
#define _GL_INLINE_HEADER_END /* nothing */

#define _Noreturn /*nothing*/



