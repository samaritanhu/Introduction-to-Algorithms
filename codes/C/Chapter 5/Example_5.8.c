#include "Example_5.8.h"

double MaximumConsecutiveSubsequence(double* X , int n)
{
    double globalMax = 0;
    double suffixMax = 0;
    for(int i = 0 ; i < n ; ++i){
        if(X[i]+suffixMax > globalMax){
            suffixMax += X[i];
            globalMax = suffixMax;
        }
        else if(X[i] + suffixMax > 0)
            suffixMax += X[i];
        else
            suffixMax = 0;
    }
    return globalMax;
}
