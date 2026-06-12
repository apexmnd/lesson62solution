#include "logic.h"

int count(int* array, int number, int size) {
	int count = 0;
	
	for (int i = 0; i < size; i++)
	{
		if (*(array + i) == number)
		{
			count++;
		}
	}

	return count;
}

int* zip(int* array, int size, int* size_out) {
	*size_out = size - count(array, size, 0) - count(array, size, 1);

	int* result = new int[*size_out];

	for (int i = 0, j = 0; i < size; i++)
	{

		int element = *(array + i);

		if (element != 0 && element != 1)
		{
			*(result + j) = element;
			j++;
		}	
	}

	return result;
}