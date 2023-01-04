#include <stdio.h>
#include "bit_ops.h"

/* Returns the Nth bit of X. Assumes 0 <= N <= 31. */
unsigned get_bit(unsigned x, unsigned n) {
    /* YOUR CODE HERE */
    unsigned y = 1 << n;
    return (y & x) >> n; /* UPDATE WITH THE CORRECT RETURN VALUE*/
}

/* Set the nth bit of the value of x to v. Assumes 0 <= N <= 31, and V is 0 or 1 */
void set_bit(unsigned *x, unsigned n, unsigned v) {
    /* YOUR CODE HERE */
    unsigned y =((1 << n) & (*x)) >> n;
    if (y == v) return;
    if (v == 1) {
        *x = (1 << n) | (*x);
    } else {
        unsigned z = -1;
        z -= 1 << n;
        *x = z & (*x);
    }
}

/* Flips the Nth bit in X. Assumes 0 <= N <= 31.*/
void flip_bit(unsigned *x, unsigned n) {
    /* YOUR CODE HERE */
    unsigned bit = (1 << n) & (*x);
    if (bit == 0)
        *x += (1 << n);
    else 
        *x -= (1 << n);
}

