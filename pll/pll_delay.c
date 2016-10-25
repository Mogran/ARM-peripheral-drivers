#include <stdio.h>


static inline void pll_delay(unsigned long loops)
{
	__asm__ volatile ("1:\n
			"subs %0, %1, #1\n"
			"bne 1b" : "=r"(loops) : "0"(loops));

}
