#include "Example_5.10.h"

void knapsack(int **res, int *items , int n , int K)
{
    **res = EXIST;
    for(int i = 1 ; i <= K ; ++i)
        *(*res + i) = FALSE;
    for(int i = 1 ; i <= n ; ++i){
        for(int k = 0 ; k <= K ; ++k){
            *(*(res + i) + k) = FALSE;
            if(*(*(res + i - 1) + k) >= EXIST)
                *(*(res + i) + k) = EXIST;
            else if(k - *(items + i - 1) >= 0)
                if(*(*(res + i - 1) + k - *(items + i - 1)) >= EXIST)
                    *(*(res + i) + k) = BELONG;
        }
    }
    showResult(res , items , n , K);
}

void showResult(int **P , int *items , int n , int K)
{
    if(!(*(*(P + n) + K))){
        printf("There doesn't exist a solution.");
        return;
    }
    int k = K;
    printf("There is");
    for(int i = n ; i > 0 ; --i){
        if(*(*(res + i) + k) == BELONG){
            printf("item%d: " , i);
            k = k - *(items + i - 1);
        }
    }
}
