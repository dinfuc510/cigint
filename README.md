# Cigint - C library for computing with unsigned integers
### How to use

- Remember to define `CIGINT_IMPLEMENTATION` before including the library
``` c
#define CIGINT_IMPLEMENTATION
#include "cigint.h"
```

- There is a strip option to remove the prefix `cigint_` from function names by define `CIGINT_STRIP_PREFIX`.
Keep in mind that the stripped name of `cigint_and` has a letter `c` at the beginning, `cand`, to avoid conflicts with C functions and C++ macros.
The same applies to `cigint_or`, `cigint_xor`, `cigint_not`, `cigint_printf`

- To specific the number of storage bytes, use `CIGINT_NBITS`. For example:
``` c
#define CIGINT_NBITS (32) // 32-bit integers
#include "cigint.h"
```
