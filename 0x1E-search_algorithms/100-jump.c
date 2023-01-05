#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using jump search
 * Uses the square root of the size of the array as the jump step
 *
 * @array: array to retrieve value from
 * @size: size of the array
 * @value: value to be retrieved from the array
 *
 * Return: The index of value in the array
 * Otherwise: -1
 */


int jump_search(int *array, size_t size, int value)
{
	size_t i, temp;
	int jump;

	/*jump = square_root(size);*/
	jump = sqrt(size);
	if (!array)
		return (-1);
	for (i = 0; i < size && array[i] < value; i += jump)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	temp = i;
	if (i <= 0)
		temp = i + jump;
	else
		i = i - jump;
	printf("Value found between indexes [%ld] and [%ld]\n", i, temp);
	for (i = i; i < temp && array[i] <= value; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}

/**
 * square_root - finds the square root of a number
 *
 * @number: Number to determine the square root
 *
 * Return: The square root of number
 */
