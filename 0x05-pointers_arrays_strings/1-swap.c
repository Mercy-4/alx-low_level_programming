#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @author Anisah
 * @a: - swaps and stores the value of a
 * @b: - swap and stores the value of b
 */
void swap_int(int *a, int *b)
{
int change;
change = *b;
*b = *a;
*a = change;
}
