#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i ;
i=0;
while (i<=n)
{
a[i] = a[n-i];
i++ ;



}	

