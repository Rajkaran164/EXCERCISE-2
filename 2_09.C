#include <stdio.h>
#include <stdlib.h>
int bitcount(unsigned x);
int main(void)
{
    printf("%d\n", bitcount(0777));
    return EXIT_SUCCESS;
}

/* bitcount:  count set bits in x */
int bitcount(unsigned x)
{
    int b;
    for (b = 0; x != 0; x &= (x-1))
        b++;
    return b;
}
