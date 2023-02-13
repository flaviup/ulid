#ifndef ULID_HH
#define ULID_HH

// http://stackoverflow.com/a/23981011
#ifdef __SIZEOF_INT128__
#define ULIDUINT128
#endif

#ifdef ULIDUINT128
#include "ulid_uint128.hh"
#else
#include "ulid_struct.hh"
#endif // ULIDUINT128

#define ULID_SIZE 16
#define ULID_TIMESTAMP_SIZE 6
#define ULID_ENTROPY_SIZE 10

#endif // ULID_HH
