/* functions defined in wctype.h 
There are issues with duplicate symbols if they are used to build libgnu
and problems with redefinitions if only used during linking via the header */

#include "config.h"
#include <stdio.h>
#include <errno.h>
#include <wchar.h>
#include <wctype.h>

_GL_WCTYPE_INLINE int iswalnum (wint_t wc)
{
  return ((wc >= '0' && wc <= '9')
          || ((wc & ~0x20) >= 'A' && (wc & ~0x20) <= 'Z'));
}

_GL_WCTYPE_INLINE int iswalpha (wint_t wc)
{
  return (wc & ~0x20) >= 'A' && (wc & ~0x20) <= 'Z';
}

_GL_WCTYPE_INLINE int iswblank (wint_t wc)
{
  return wc == ' ' || wc == '\t';
}

_GL_WCTYPE_INLINE int iswcntrl (wint_t wc)
{
  return (wc & ~0x1f) == 0 || wc == 0x7f;
}

_GL_WCTYPE_INLINE int iswdigit (wint_t wc)
{
  return wc >= '0' && wc <= '9';
}

_GL_WCTYPE_INLINE int iswgraph (wint_t wc)
{
  return wc >= '!' && wc <= '~';
}

_GL_WCTYPE_INLINE int iswlower (wint_t wc)
{
  return wc >= 'a' && wc <= 'z';
}

_GL_WCTYPE_INLINE int iswprint (wint_t wc)
{
  return wc >= ' ' && wc <= '~';
}

_GL_WCTYPE_INLINE int iswpunct (wint_t wc)
{
  return (wc >= '!' && wc <= '~'
          && !((wc >= '0' && wc <= '9')
               || ((wc & ~0x20) >= 'A' && (wc & ~0x20) <= 'Z')));
}

_GL_WCTYPE_INLINE int iswspace (wint_t wc)
{
  return (wc == ' ' || wc == '\t'
          || wc == '\n' || wc == '\v' || wc == '\f' || wc == '\r');
}

_GL_WCTYPE_INLINE int iswupper (wint_t wc)
{
  return wc >= 'A' && wc <= 'Z';
}

_GL_WCTYPE_INLINE int iswxdigit (wint_t wc)
{
  return ((wc >= '0' && wc <= '9')
          || ((wc & ~0x20) >= 'A' && (wc & ~0x20) <= 'F'));
}

_GL_WCTYPE_INLINE wint_t towlower (wint_t wc)
{
  return (wc >= 'A' && wc <= 'Z' ? wc - 'A' + 'a' : wc);
}

_GL_WCTYPE_INLINE wint_t towupper (wint_t wc)
{
  return (wc >= 'a' && wc <= 'z' ? wc - 'a' + 'A' : wc);
}

_GL_FUNCDECL_SYS (iswblank, int, (wint_t wc));







