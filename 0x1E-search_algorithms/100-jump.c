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
	for (i = 0; i < size && array[i] < value; i += jump)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	/*printf("%d\n", array[i]);*/
	temp = i;
	i = i - jump;
	printf("Value found between indexes [%ld] and [%ld]\n", i, temp);
	/*if (abs(array[i]) >= value && i > 0)*/
	/*{*/
	/*temp = i;
	i = i - jump;*/
	/*printf("value of temp is %d\n", temp);*/
	for (i = i; i <= temp && abs(array[i]) <= value; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	/*}*/
	return (-1);
}

/**
 * square_root - finds the square root of a number
 *
 * @number: Number to determine the square root
 *
 * Return: The square root of number
 */


int square_root(int number)
{
	int range = number / 4;
	int i = 0;

	for (i = 0; i <= range; i++)
	{
		if (i * i == number)
		{
			return (i);
		}
	}
	return (i);
}
