#include "search_algos.h"
/**
 *print_array - print the array being searched
 *@array: a pointer to the first element of the array to search in
 *@right: the right subarray
 *@left: the left subarray
 */
void print_array(int *array, size_t right, size_t left)
{
printf("Searching in array: ");
while (right <= left)
{
	printf("%d", array[right]);
	if (right != left)
		printf(", ");
	right++;
}
printf("\n");
}
/**
 *binary_search - searches for a value in a sorted array of integers
 *using the Binary search algorithm
 *@array: a pointer to the first element of the array to search in
*@size: the number of elements in array
*@value: the value to search for
*Return: the index of the value or -1 if the value is not found
 */
int binary_search(int *array, size_t size, int value)
{
size_t r = 0;
size_t l = size - 1;
size_t m;
if (array == NULL)
	return (-1);
while (r <= l)
{
	m = (r + l) / 2;
	print_array(array, r, l);
	if (value == array[m])
		return (m);
	else if (value < array[m])
		l = m - 1;
	else
		r = m + 1;
}
return (-1);
}
