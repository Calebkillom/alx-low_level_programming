#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array
 * @array: the array
 * @size: the size of the array
 * @value: the value to be looked for
 *
 * Return: the index or -1 if null or not in the array
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;
	size_t n;

	if (array == NULL)
		return -1;

	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: ");
		for (n = left; n <= right; n++)
		{
			if (n == right)
				printf("%d\n", array[n]);
			else
				printf("%d, ", array[n]);
		}

		if (array[mid] == value)
			return mid;
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return -1;
}
