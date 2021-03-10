#include <stdint.h>

#include "search.h"

size_t linsearch(uint8_t const *array, size_t length, uint8_t target)
{
	for (int i = 0; i < (length - 1); i++) {
		if (array[i] == target) return i;
	}
	return length+1; // no match
}

size_t binsearch(uint8_t *array, size_t length, uint8_t target)
{
	return 0;
}
