#define CIGINT_IMPLEMENTATION
#define CIGINT_STRIP_PREFIX
#define CIGINT_NBITS (24000)
#include "cigint.h"

int main(void) {
	Cigint one = from_uint((1ul << 31) - 1);
	one = pow(one, 460);
	cprintf("%Cd\n\n", one);

	one = from_uint((1ul << 31) - 1);
	one = pow(one, 460, cigint_from_uint(1e9 + 7));
	cprintf("%Cd\n", one);

	return 0;
}
