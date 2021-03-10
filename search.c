#include <stdint.h>

#include "search.h"

size_t linsearch(uint8_t const *array, size_t length, uint8_t target)
{
	for (int i = 0; i < (length - 1); i++) {
		if (array[i] == target) return i;
	}
	return length+1; // no match
}

size_t binsearch(uint8_t const *array, size_t length, uint8_t target)
{
	size_t min = 0;
	size_t max = length - 1;

	while (max >= min) {
		uint8_t guess = array[(min + max) / 2];
		if (guess == target) return guess;
		else if (guess < target) min = guess + 1;
		else if (guess > target) max = guess - 1;
	}
	return length+1; // no match
}
