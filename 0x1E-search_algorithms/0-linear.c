#include "search_algos.h"
/**
*linear_search - function that searches for a value in an array of integers
*using the Linear search algorithm
*@array:  a pointer to the first element of the array to search in
*@size: the number of elements in array
*@value: the value to search for
*Return: the index of the value or -1 if the value is not found
*/
int linear_search(int *array, __attribute__((unused)) size_t size, int value)
{
size_t x;
size_t y = 0;
int i = 0;
x = size - 1;
if (array == NULL)
	return (-1);
while (y <= x)
{
	printf("Value checked array[%ld] = [%d]\n", y, array[y]);
	if (array[y] == value)
	{
		i++;
		break;
	}
	y++;
}
if (i == 1)
	return (y);
else
	return (-1);
}
