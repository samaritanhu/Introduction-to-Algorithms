#ifndef EXAMPLE_510

    #include <stdio.h>
    #include <stdlib.h>

    #define FALSE 0
    #define EXIST 1
    #define BELONG 2

    #define EXAMPLE_510

// N is the number of the items.
// K is the capacity of the bag and it is a integer.
// res is a (K+1)*(K+1) matrix of integers which is used to record the result.
// items is a n*n matrix of integers.
// knapsack will change the matrix(res), and showResult will show the result of the knapsack.

void knapsack(int **res , int *items , int n , int K);
void showResult(int **res , int *items ,int n ,int K);

#endif // EXAMPLE_510

