# Generated automatically from Makefile.in by configure.
# Makefile for src

#### Start of system configuration section. ####

# Directories used by "make":
srcdir = .

# Directories used by "make install":
prefix = /usr/local
local_prefix = /usr/local
exec_prefix = $(prefix)
libdir = $(exec_prefix)/lib

# Programs used by "make":
CC = cc
CFLAGS = -D_POSIX_SOURCE -D_SUSV2_SOURCE -D_BSD_EXTENSION -D_LIMITS_EXTENSION -D_RESEARCH_SOURCE -D_C99_SNPRINTF_EXTENSION
CPP = cc -E
INCLUDES = -I. -I$(srcdir) -I../include -I$(srcdir)/../include
LIBTOOL = $(SHELL) $(top_builddir)/libtool
LIBTOOL_COMPILE = $(LIBTOOL) --mode=compile
LIBTOOL_LINK = $(LIBTOOL) --mode=link
LIBTOOL_INSTALL = $(LIBTOOL) --mode=install
LIBTOOL_UNINSTALL = $(LIBTOOL) --mode=uninstall
MV = mv
LN = cp
LN_S = cp
RM = rm -f

# Programs used by "make install":
INSTALL = /bin/install -c
INSTALL_PROGRAM = $(INSTALL)
INSTALL_DATA = $(INSTALL) -m 644

#### End of system configuration section. ####

SHELL = /bin/sh

# Needed by $(LIBTOOL).
top_builddir = ..

# Set to "trad-" if --with-traditional-wcstombs was specified.
wcmb_trad = trad-

# Set to "trad-" if --with-traditional-mbstowcs was specified.
mbwc_trad = trad-

GENERAL_SOURCES = \
  $(srcdir)/locale_is.c $(srcdir)/mb_cur_max.c $(srcdir)/setlocale.c $(srcdir)/mbsinit.c
WSTRING_SOURCES = \
  $(srcdir)/wstring/wcpcpy.c $(srcdir)/wstring/wcpncpy.c $(srcdir)/wstring/wcscat.c $(srcdir)/wstring/wcschr.c $(srcdir)/wstring/wcscmp.c $(srcdir)/wstring/wcscpy.c $(srcdir)/wstring/wcscspn.c \
  $(srcdir)/wstring/wcsdup.c $(srcdir)/wstring/wcslen.c $(srcdir)/wstring/wcsncat.c $(srcdir)/wstring/wcsncmp.c $(srcdir)/wstring/wcsncpy.c $(srcdir)/wstring/wcsnlen.c $(srcdir)/wstring/wcspbrk.c \
  $(srcdir)/wstring/wcsrchr.c $(srcdir)/wstring/wcsspn.c $(srcdir)/wstring/wcsstr.c $(srcdir)/wstring/wcstok.c \
  $(srcdir)/wstring/wmemchr.c $(srcdir)/wstring/wmemcmp.c $(srcdir)/wstring/wmemcpy.c $(srcdir)/wstring/wmemmove.c $(srcdir)/wstring/wmemset.c
WCSTOMBS_SOURCES = \
  $(srcdir)/$(wcmb_trad)wcstombs/wcrtomb.c $(srcdir)/$(wcmb_trad)wcstombs/wcsnrtombs.c $(srcdir)/$(wcmb_trad)wcstombs/wcsrtombs.c $(srcdir)/$(wcmb_trad)wcstombs/wcstombs.c $(srcdir)/$(wcmb_trad)wcstombs/wctob.c $(srcdir)/$(wcmb_trad)wcstombs/wctomb.c
MBSTOWCS_SOURCES = \
  $(srcdir)/$(mbwc_trad)mbstowcs/btowc.c $(srcdir)/$(mbwc_trad)mbstowcs/mblen.c $(srcdir)/$(mbwc_trad)mbstowcs/mbrlen.c $(srcdir)/$(mbwc_trad)mbstowcs/mbrtowc.c $(srcdir)/$(mbwc_trad)mbstowcs/mbsnrtowcs.c $(srcdir)/$(mbwc_trad)mbstowcs/mbsrtowcs.c \
  $(srcdir)/$(mbwc_trad)mbstowcs/mbstowcs.c $(srcdir)/$(mbwc_trad)mbstowcs/mbtowc.c
CASECONV_SOURCES = \
  $(srcdir)/caseconv/noppage.c $(srcdir)/caseconv/towctrans.c $(srcdir)/caseconv/towlower.c $(srcdir)/caseconv/towupper.c $(srcdir)/caseconv/wctrans.c \
  $(srcdir)/caseconv/wcscasecmp.c $(srcdir)/caseconv/wcsncasecmp.c
ATTRIBUTE_SOURCES = \
  $(srcdir)/attribute/attribute.c $(srcdir)/attribute/iswalnum.c $(srcdir)/attribute/iswalpha.c $(srcdir)/attribute/iswblank.c $(srcdir)/attribute/iswcntrl.c $(srcdir)/attribute/iswctype.c \
  $(srcdir)/attribute/iswdigit.c $(srcdir)/attribute/iswgraph.c $(srcdir)/attribute/iswlower.c $(srcdir)/attribute/iswprint.c $(srcdir)/attribute/iswpunct.c $(srcdir)/attribute/iswspace.c \
  $(srcdir)/attribute/iswupper.c $(srcdir)/attribute/iswxdigit.c $(srcdir)/attribute/wctype.c $(srcdir)/attribute/wcwidth.c $(srcdir)/attribute/wcswidth.c
NUMBER_SOURCES = \
  $(srcdir)/number/integer-parse.c $(srcdir)/number/wcstol.c $(srcdir)/number/wcstoul.c $(srcdir)/number/wcstoll.c $(srcdir)/number/wcstoull.c \
  $(srcdir)/number/number-parse.c $(srcdir)/number/wcstof.c $(srcdir)/number/wcstod.c $(srcdir)/number/wcstold.c
STDIO_SOURCES = \
  $(srcdir)/stdio/fgetwc.c $(srcdir)/stdio/fgetws.c $(srcdir)/stdio/getwchar.c $(srcdir)/stdio/ungetwc.c \
  $(srcdir)/stdio/fputwc.c $(srcdir)/stdio/fputws.c $(srcdir)/stdio/putwchar.c \
  $(srcdir)/stdio/fwide.c \
  $(srcdir)/stdio/printf-args.c $(srcdir)/stdio/printf-parse.c $(srcdir)/stdio/wprintf-parse.c \
  $(srcdir)/stdio/vfprintf.c $(srcdir)/stdio/vprintf.c $(srcdir)/stdio/vsprintf.c $(srcdir)/stdio/vsnprintf.c \
  $(srcdir)/stdio/fprintf.c $(srcdir)/stdio/printf.c $(srcdir)/stdio/sprintf.c $(srcdir)/stdio/snprintf.c \
  $(srcdir)/stdio/vfwprintf.c $(srcdir)/stdio/vwprintf.c $(srcdir)/stdio/vswprintf.c \
  $(srcdir)/stdio/fwprintf.c $(srcdir)/stdio/wprintf.c $(srcdir)/stdio/swprintf.c

SOURCES = \
  $(GENERAL_SOURCES) $(WSTRING_SOURCES) $(WCSTOMBS_SOURCES) $(MBSTOWCS_SOURCES) $(CASECONV_SOURCES) $(ATTRIBUTE_SOURCES) $(NUMBER_SOURCES) $(STDIO_SOURCES)

GENERAL_OBJECTS = \
  locale_is.lo mb_cur_max.lo setlocale.lo mbsinit.lo
WSTRING_OBJECTS = \
  wcpcpy.lo wcpncpy.lo wcscat.lo wcschr.lo wcscmp.lo wcscpy.lo wcscspn.lo \
  wcsdup.lo wcslen.lo wcsncat.lo wcsncmp.lo wcsncpy.lo wcsnlen.lo wcspbrk.lo \
  wcsrchr.lo wcsspn.lo wcsstr.lo wcstok.lo \
  wmemchr.lo wmemcmp.lo wmemcpy.lo wmemmove.lo wmemset.lo
WCSTOMBS_OBJECTS = \
  wcrtomb.lo wcsnrtombs.lo wcsrtombs.lo wcstombs.lo wctob.lo wctomb.lo
MBSTOWCS_OBJECTS = \
  btowc.lo mblen.lo mbrlen.lo mbrtowc.lo mbsnrtowcs.lo mbsrtowcs.lo \
  mbstowcs.lo mbtowc.lo
CASECONV_OBJECTS = \
  noppage.lo towctrans.lo towlower.lo towupper.lo wctrans.lo \
  wcscasecmp.lo wcsncasecmp.lo
ATTRIBUTE_OBJECTS = \
  attribute.lo iswalnum.lo iswalpha.lo iswblank.lo iswcntrl.lo iswctype.lo \
  iswdigit.lo iswgraph.lo iswlower.lo iswprint.lo iswpunct.lo iswspace.lo \
  iswupper.lo iswxdigit.lo wctype.lo wcwidth.lo wcswidth.lo
NUMBER_OBJECTS = \
  integer-parse.lo wcstol.lo wcstoul.lo wcstoll.lo wcstoull.lo \
  number-parse.lo wcstof.lo wcstod.lo wcstold.lo
STDIO_OBJECTS = \
  fgetwc.lo fgetws.lo getwchar.lo ungetwc.lo \
  fputwc.lo fputws.lo putwchar.lo \
  fwide.lo \
  printf-args.lo printf-parse.lo wprintf-parse.lo \
  vfprintf.lo vprintf.lo vsprintf.lo vsnprintf.lo \
  fprintf.lo printf.lo sprintf.lo snprintf.lo \
  vfwprintf.lo vwprintf.lo vswprintf.lo \
  fwprintf.lo wprintf.lo swprintf.lo

OBJECTS = \
  $(GENERAL_OBJECTS) $(WSTRING_OBJECTS) $(WCSTOMBS_OBJECTS) $(MBSTOWCS_OBJECTS) $(CASECONV_OBJECTS) $(ATTRIBUTE_OBJECTS) $(NUMBER_OBJECTS) $(STDIO_OBJECTS)

PLUG_SOURCES = \
  $(srcdir)/libc.c

all : libutf8.la 

libutf8.la : $(OBJECTS)
	$(LIBTOOL_LINK) $(CC) -o libutf8.la -rpath $(libdir) $(OBJECTS)

libutf8_plug.so : libutf8_plug_.so
	$(RM) libutf8_plug.so
	$(LN_S) libutf8_plug_.so libutf8_plug.so

libutf8_plug_linux.so : $(SOURCES)
	$(CC) $(CFLAGS) $(INCLUDES) -fPIC -DPIC -DLIBUTF8_PLUG $(SOURCES) $(PLUG_SOURCES) -ldl -shared -o libutf8_plug_linux.so

libutf8_plug_solaris.so : $(SOURCES)
	$(CC) $(CFLAGS) $(INCLUDES) -fPIC -DPIC -DLIBUTF8_PLUG $(SOURCES) $(PLUG_SOURCES) -G -o libutf8_plug_solaris.so

libutf8_plug_osf.so : $(SOURCES)
	$(CC) $(CFLAGS) $(INCLUDES) -fPIC -DPIC -DLIBUTF8_PLUG $(SOURCES) $(PLUG_SOURCES) -shared -o libutf8_plug_osf.so

attribute.lo : $(srcdir)/attribute/attribute.c $(srcdir)/attribute/iswbits.h $(srcdir)/attribute/attribute.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/attribute/attribute.c

btowc.lo : $(srcdir)/$(mbwc_trad)mbstowcs/btowc.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/$(mbwc_trad)mbstowcs/btowc.c

fgetwc.lo : $(srcdir)/stdio/fgetwc.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/stdio/fgetwc.c

fgetws.lo : $(srcdir)/stdio/fgetws.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/stdio/fgetws.c

fprintf.lo : $(srcdir)/stdio/fprintf.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/stdio/fprintf.c

fputwc.lo : $(srcdir)/stdio/fputwc.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/stdio/fputwc.c

fputws.lo : $(srcdir)/stdio/fputws.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/stdio/fputws.c

fwide.lo : $(srcdir)/stdio/fwide.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/stdio/fwide.c

fwprintf.lo : $(srcdir)/stdio/fwprintf.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/stdio/fwprintf.c

getwchar.lo : $(srcdir)/stdio/getwchar.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/stdio/getwchar.c

integer-parse.lo : $(srcdir)/number/integer-parse.c $(srcdir)/number/integer-parse.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/number/integer-parse.c

iswalnum.lo : $(srcdir)/attribute/iswalnum.c $(srcdir)/attribute/iswbits.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/attribute/iswalnum.c

iswalpha.lo : $(srcdir)/attribute/iswalpha.c $(srcdir)/attribute/iswbits.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/attribute/iswalpha.c

iswblank.lo : $(srcdir)/attribute/iswblank.c $(srcdir)/attribute/iswbits.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/attribute/iswblank.c

iswcntrl.lo : $(srcdir)/attribute/iswcntrl.c $(srcdir)/attribute/iswbits.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/attribute/iswcntrl.c

iswctype.lo : $(srcdir)/attribute/iswctype.c $(srcdir)/attribute/iswbits.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/attribute/iswctype.c

iswdigit.lo : $(srcdir)/attribute/iswdigit.c $(srcdir)/attribute/iswbits.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/attribute/iswdigit.c

iswgraph.lo : $(srcdir)/attribute/iswgraph.c $(srcdir)/attribute/iswbits.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/attribute/iswgraph.c

iswlower.lo : $(srcdir)/attribute/iswlower.c $(srcdir)/attribute/iswbits.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/attribute/iswlower.c

iswprint.lo : $(srcdir)/attribute/iswprint.c $(srcdir)/attribute/iswbits.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/attribute/iswprint.c

iswpunct.lo : $(srcdir)/attribute/iswpunct.c $(srcdir)/attribute/iswbits.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/attribute/iswpunct.c

iswspace.lo : $(srcdir)/attribute/iswspace.c $(srcdir)/attribute/iswbits.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/attribute/iswspace.c

iswupper.lo : $(srcdir)/attribute/iswupper.c $(srcdir)/attribute/iswbits.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/attribute/iswupper.c

iswxdigit.lo : $(srcdir)/attribute/iswxdigit.c $(srcdir)/attribute/iswbits.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/attribute/iswxdigit.c

locale_is.lo : $(srcdir)/locale_is.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/locale_is.c

mb_cur_max.lo : $(srcdir)/mb_cur_max.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/mb_cur_max.c

mblen.lo : $(srcdir)/$(mbwc_trad)mbstowcs/mblen.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/$(mbwc_trad)mbstowcs/mblen.c

mbrlen.lo : $(srcdir)/$(mbwc_trad)mbstowcs/mbrlen.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/$(mbwc_trad)mbstowcs/mbrlen.c

mbrtowc.lo : $(srcdir)/$(mbwc_trad)mbstowcs/mbrtowc.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/$(mbwc_trad)mbstowcs/mbrtowc.c

mbsinit.lo : $(srcdir)/mbsinit.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/mbsinit.c

mbsnrtowcs.lo : $(srcdir)/$(mbwc_trad)mbstowcs/mbsnrtowcs.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/$(mbwc_trad)mbstowcs/mbsnrtowcs.c

mbsrtowcs.lo : $(srcdir)/$(mbwc_trad)mbstowcs/mbsrtowcs.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/$(mbwc_trad)mbstowcs/mbsrtowcs.c

mbstowcs.lo : $(srcdir)/$(mbwc_trad)mbstowcs/mbstowcs.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/$(mbwc_trad)mbstowcs/mbstowcs.c

mbtowc.lo : $(srcdir)/$(mbwc_trad)mbstowcs/mbtowc.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/$(mbwc_trad)mbstowcs/mbtowc.c

noppage.lo : $(srcdir)/caseconv/noppage.c $(srcdir)/caseconv/noppage.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/caseconv/noppage.c

number-parse.lo : $(srcdir)/number/number-parse.c $(srcdir)/number/number-parse.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/number/number-parse.c

printf.lo : $(srcdir)/stdio/printf.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/stdio/printf.c

printf-args.lo : $(srcdir)/stdio/printf-args.c $(srcdir)/stdio/printf-args.h config.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/stdio/printf-args.c

printf-parse.lo : $(srcdir)/stdio/printf-parse.c $(srcdir)/stdio/printf-parse.h $(srcdir)/stdio/printf-args.h config.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/stdio/printf-parse.c

putwchar.lo : $(srcdir)/stdio/putwchar.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/stdio/putwchar.c

setlocale.lo : $(srcdir)/setlocale.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/setlocale.c

snprintf.lo : $(srcdir)/stdio/snprintf.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/stdio/snprintf.c

sprintf.lo : $(srcdir)/stdio/sprintf.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/stdio/sprintf.c

swprintf.lo : $(srcdir)/stdio/swprintf.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/stdio/swprintf.c

towctrans.lo : $(srcdir)/caseconv/towctrans.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/caseconv/towctrans.c

towlower.lo : $(srcdir)/caseconv/towlower.c $(srcdir)/caseconv/noppage.h $(srcdir)/caseconv/tolower.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/caseconv/towlower.c

towupper.lo : $(srcdir)/caseconv/towupper.c $(srcdir)/caseconv/noppage.h $(srcdir)/caseconv/toupper.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/caseconv/towupper.c

ungetwc.lo : $(srcdir)/stdio/ungetwc.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/stdio/ungetwc.c

vfprintf.lo : $(srcdir)/stdio/vfprintf.c $(srcdir)/stdio/printf-parse.h $(srcdir)/stdio/printf-args.h $(srcdir)/sysdep-alloca.h config.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/stdio/vfprintf.c

vfwprintf.lo : $(srcdir)/stdio/vfwprintf.c $(srcdir)/stdio/wprintf-parse.h $(srcdir)/stdio/printf-args.h $(srcdir)/sysdep-alloca.h config.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/stdio/vfwprintf.c

vprintf.lo : $(srcdir)/stdio/vprintf.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/stdio/vprintf.c

vsnprintf.lo : $(srcdir)/stdio/vsnprintf.c $(srcdir)/stdio/printf-parse.h $(srcdir)/stdio/printf-args.h $(srcdir)/sysdep-alloca.h config.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/stdio/vsnprintf.c

vsprintf.lo : $(srcdir)/stdio/vsprintf.c $(srcdir)/stdio/printf-parse.h $(srcdir)/stdio/printf-args.h $(srcdir)/sysdep-alloca.h config.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/stdio/vsprintf.c

vswprintf.lo : $(srcdir)/stdio/vswprintf.c $(srcdir)/stdio/wprintf-parse.h $(srcdir)/stdio/printf-args.h $(srcdir)/sysdep-alloca.h config.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/stdio/vswprintf.c

vwprintf.lo : $(srcdir)/stdio/vwprintf.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/stdio/vwprintf.c

wcpcpy.lo : $(srcdir)/wstring/wcpcpy.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/wstring/wcpcpy.c

wcpncpy.lo : $(srcdir)/wstring/wcpncpy.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/wstring/wcpncpy.c

wcrtomb.lo : $(srcdir)/$(wcmb_trad)wcstombs/wcrtomb.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/$(wcmb_trad)wcstombs/wcrtomb.c

wcscasecmp.lo : $(srcdir)/caseconv/wcscasecmp.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/caseconv/wcscasecmp.c

wcscat.lo : $(srcdir)/wstring/wcscat.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/wstring/wcscat.c

wcschr.lo : $(srcdir)/wstring/wcschr.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/wstring/wcschr.c

wcscmp.lo : $(srcdir)/wstring/wcscmp.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/wstring/wcscmp.c

wcscpy.lo : $(srcdir)/wstring/wcscpy.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/wstring/wcscpy.c

wcscspn.lo : $(srcdir)/wstring/wcscspn.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/wstring/wcscspn.c

wcsdup.lo : $(srcdir)/wstring/wcsdup.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/wstring/wcsdup.c

wcslen.lo : $(srcdir)/wstring/wcslen.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/wstring/wcslen.c

wcsncasecmp.lo : $(srcdir)/caseconv/wcsncasecmp.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/caseconv/wcsncasecmp.c

wcsncat.lo : $(srcdir)/wstring/wcsncat.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/wstring/wcsncat.c

wcsncmp.lo : $(srcdir)/wstring/wcsncmp.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/wstring/wcsncmp.c

wcsncpy.lo : $(srcdir)/wstring/wcsncpy.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/wstring/wcsncpy.c

wcsnlen.lo : $(srcdir)/wstring/wcsnlen.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/wstring/wcsnlen.c

wcsnrtombs.lo : $(srcdir)/$(wcmb_trad)wcstombs/wcsnrtombs.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/$(wcmb_trad)wcstombs/wcsnrtombs.c

wcspbrk.lo : $(srcdir)/wstring/wcspbrk.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/wstring/wcspbrk.c

wcsrchr.lo : $(srcdir)/wstring/wcsrchr.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/wstring/wcsrchr.c

wcsrtombs.lo : $(srcdir)/$(wcmb_trad)wcstombs/wcsrtombs.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/$(wcmb_trad)wcstombs/wcsrtombs.c

wcsspn.lo : $(srcdir)/wstring/wcsspn.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/wstring/wcsspn.c

wcsstr.lo : $(srcdir)/wstring/wcsstr.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/wstring/wcsstr.c

wcstod.lo : $(srcdir)/number/wcstod.c $(srcdir)/number/number-parse.h $(srcdir)/sysdep-alloca.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/number/wcstod.c

wcstof.lo : $(srcdir)/number/wcstof.c $(srcdir)/number/number-parse.h $(srcdir)/sysdep-alloca.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/number/wcstof.c

wcstok.lo : $(srcdir)/wstring/wcstok.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/wstring/wcstok.c

wcstol.lo : $(srcdir)/number/wcstol.c $(srcdir)/number/integer-parse.h $(srcdir)/sysdep-alloca.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/number/wcstol.c

wcstold.lo : $(srcdir)/number/wcstold.c $(srcdir)/number/number-parse.h $(srcdir)/sysdep-alloca.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/number/wcstold.c

wcstoll.lo : $(srcdir)/number/wcstoll.c $(srcdir)/number/integer-parse.h $(srcdir)/sysdep-alloca.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/number/wcstoll.c

wcstombs.lo : $(srcdir)/$(wcmb_trad)wcstombs/wcstombs.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/$(wcmb_trad)wcstombs/wcstombs.c

wcstoul.lo : $(srcdir)/number/wcstoul.c $(srcdir)/number/integer-parse.h $(srcdir)/sysdep-alloca.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/number/wcstoul.c

wcstoull.lo : $(srcdir)/number/wcstoull.c $(srcdir)/number/integer-parse.h $(srcdir)/sysdep-alloca.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/number/wcstoull.c

wcswidth.lo : $(srcdir)/attribute/wcswidth.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/attribute/wcswidth.c

wctob.lo : $(srcdir)/$(wcmb_trad)wcstombs/wctob.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/$(wcmb_trad)wcstombs/wctob.c

wctomb.lo : $(srcdir)/$(wcmb_trad)wcstombs/wctomb.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/$(wcmb_trad)wcstombs/wctomb.c

wctrans.lo : $(srcdir)/caseconv/wctrans.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/caseconv/wctrans.c

wctype.lo : $(srcdir)/attribute/wctype.c $(srcdir)/attribute/iswbits.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/attribute/wctype.c

wcwidth.lo : $(srcdir)/attribute/wcwidth.c $(srcdir)/attribute/nonspacing.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/attribute/wcwidth.c

wmemchr.lo : $(srcdir)/wstring/wmemchr.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/wstring/wmemchr.c

wmemcmp.lo : $(srcdir)/wstring/wmemcmp.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/wstring/wmemcmp.c

wmemcpy.lo : $(srcdir)/wstring/wmemcpy.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/wstring/wmemcpy.c

wmemmove.lo : $(srcdir)/wstring/wmemmove.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/wstring/wmemmove.c

wmemset.lo : $(srcdir)/wstring/wmemset.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/wstring/wmemset.c

wprintf.lo : $(srcdir)/stdio/wprintf.c
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/stdio/wprintf.c

wprintf-parse.lo : $(srcdir)/stdio/wprintf-parse.c $(srcdir)/stdio/wprintf-parse.h $(srcdir)/stdio/printf-args.h config.h
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(INCLUDES) -c $(srcdir)/stdio/wprintf-parse.c

install : all force
	if [ ! -d $(prefix) ] ; then mkdir $(prefix) ; fi
	if [ ! -d $(exec_prefix) ] ; then mkdir $(exec_prefix) ; fi
	if [ ! -d $(libdir) ] ; then mkdir $(libdir) ; fi
	$(LIBTOOL_INSTALL) $(INSTALL_DATA) libutf8.la $(libdir)/libutf8.la
	if test -n ""; then $(INSTALL_DATA)  $(libdir)/.new && mv $(libdir)/.new $(libdir)/ ; fi

installdirs : force
	if [ ! -d $(prefix) ] ; then mkdir $(prefix) ; fi
	if [ ! -d $(exec_prefix) ] ; then mkdir $(exec_prefix) ; fi
	if [ ! -d $(libdir) ] ; then mkdir $(libdir) ; fi

uninstall : force
	$(LIBTOOL_UNINSTALL) $(RM) $(libdir)/libutf8.la
	if test -n ""; then $(RM) $(libdir)/ ; fi

check : all

mostlyclean : clean

clean : force
	$(RM) *.o *.lo *.a *.la libutf8_plug* core
	$(RM) -r .libs _libs

distclean : clean
	$(RM) config.status config.log config.cache Makefile config.h libtool

maintainer-clean : distclean

force :

