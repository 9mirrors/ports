#ifndef GNULIB_REPLACE_H
#define GNULIB_REPLACE_H 1

/* The definitions of _GL_FUNCDECL_RPL etc. are copied here.  */
#define _GL_EXTERN_C extern
#define _GL_FUNCDECL_SYS(func, rettype, parameters) rettype func parameters
#define _GL_FUNCDECL_RPL(rpl_func, rettype, parameters) rettype rpl_func parameters 
#define _GL_CXXALIAS_SYS_CAST(func, rettype, parameters) _gl_cxxalias_dummy
#define _GL_CXXALIAS_SYS(func, rettype, parameters) rettype func parameters
#define _GL_CXXALIAS_SYS_CAST2(func, rettype, parameters, retype2, parameters2) _gl_cxxalias_dummy

/* The definition of _GL_ARG_NONNULL is copied here.  */
#define _GL_ARG_NONNULL(params) /* ? */

/* The definition of _GL_WARN_ON_USE is copied here.  */
#define _GL_WARN_ON_USE(func, message) /* ? */

#define _GL_EXTERN_C extern
#define _GL_ATTRIBUTE_CONST /* nothing */
#define _GL_ATTRIBUTE_PURE 
#define _GL_UNUSED /*nothing*/
#define _GL_INLINE /*nothing*/
#define _GL_INLINE_HEADER_BEGIN /* nothing */ 
#define _GL_INLINE_HEADER_END /* nothing */

#define _Noreturn /*nothing*/
#define _Restrict /*nothing*/
#define restrict /*nothing*/

#define PROMOTED_MODE_T mode_t

#endif /* GNULIB_REPLACE_H */


