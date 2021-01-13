#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/*Libraries standars*/
#include <stdio.h>
#include <stdlib.h>

/*Function algorithms search*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int left, int right, int *array);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

#endif
