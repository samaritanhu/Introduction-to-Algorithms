#include "Example_5.2.h"

double Polynomial_Evaluation(double* a , int n , int x)
{
    double result = 0;
    for(int i = n - 1; i >= 0 ; --i)
        result = result * x + *(a + i);
    return result;
}
