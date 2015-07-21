
#ifndef _json_inttypes_h_
#define _json_inttypes_h_

#pragma lib "/$M/lib/ape/libjson-c.a"

#include "json_config.h"

#ifdef JSON_C_HAVE_INTTYPES_H
/* inttypes.h includes stdint.h */
#include <inttypes.h>

#else
#include <stdint.h>

#define PRId64 "I64d"
#define SCNd64 "I64d"

#endif

#endif
