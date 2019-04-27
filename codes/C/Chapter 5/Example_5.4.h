

#ifndef EXAMPLE_54

    #include <stdlib.h>
    #include <stdio.h>

    #define EXAMPLE_54

// result is used to save the subset, it should be at least as long as f.
// f is a pointer of an array of integers whose values are between 1 and n.And it is the mapping method of S.
// n is the number of the elements of f
// S is a pointer of a subset of the integers from 1 to n.
// Mapping will change the number in the result
// showResult will show the one-to-one subset, the n is the length of f.

void Mapping(int* S , int* result , int* f , int n);
void showResult(int* S , int* result, int n);

#endif // EXAMPLE_54

