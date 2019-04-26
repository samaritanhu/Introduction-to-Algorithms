// N is the number of the items.
// K is the capacity of the bag and it is a integer.
// res is a (K+1)*(K+1) matrix of integers which is used to record the result.
// items is a n*n matrix of integers.
// The return is a matrix(res) which contains the result,and it will print the result on your screen.

#ifndef EXAMPLE_510

    #include <stdio.h>
    #include <stdlib.h>

    #define FALSE 0
    #define EXIST 1
    #define BELONG 2

    #define EXAMPLE_510

void knapsack(int **res , int *items , int n , int K);
void showResult(int **res , int *items ,int n ,int K);

#endif // EXAMPLE_510
