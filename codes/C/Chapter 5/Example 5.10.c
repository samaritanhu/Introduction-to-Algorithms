#include <stdio.h>
#include <stdlib.h>
#define FALSE 0
#define EXIST 1
#define BELONG 2

/*Example 5.10*/
void myInput(int *input);
void knapsack(int **res , int *item , int n , int K);
void showResult(int **res , int *item ,int n ,int K);
int main()
{
    int K;
    int n;
    int *S = NULL;
    int **P = NULL;
    printf("Input K:");
    scanf("%d",&K);
    printf("Input the number of the items:");
    myInput(&n);
    S = (int *)malloc(n * sizeof(int));
    if(S == NULL){
        printf("error when malloc.");
        exit(EXIT_FAILURE);
    }
    printf("Input the weight of the items.\n")
    for(int i = 0 ; i < n ; ++i){
        printf("%d£º", i + 1);
        myInput(S + i);
    }
    P = (int **)malloc((n + 1) * sizeof(int *));
    for(int i = 0 ; i <= n ; ++i)
        *(P + i) = (int *)malloc((K + 1) * sizeof(int));
    if(P == NULL){
        printf("error when malloc.");
        exit(EXIT_FAILURE);
    }
    knapsack(P , S , n , K);
    if(*(*(P + n) + K))
        showResult(P , S ,n , K);
    else
        printf("There doesn't exist a solution.");
    for(int i = 0 ; i <= n ; ++i)
        free(*(P + i));
    free(P);
    free(S);
}
void myInput(int *input)
{
    char c;
    if(!(scanf("%d" , input))){
        printf("quit soon,bye~.");
        exit(EXIT_SUCCESS);
    }
    while((c = getchar()) != '\n')
        continue;
}
void knapsack(int **res , int *item , int n , int K)
{
    **res = EXIST;
    for(int i = 1 ; i <= K ; ++i)
        *(*res + i) = FALSE;
    for(int i = 1 ; i <= n ; ++i){
        for(int k = 0 ; k <= K ; ++k){
            *(*(res + i) + k) = FALSE;
            if(*(*(res + i - 1) + k) >= EXIST)
                *(*(res + i) + k) = EXIST;
            else if(k - *(item + i - 1) >= 0)
                if(*(*(res + i - 1) + k - *(item + i - 1)) >= EXIST)
                    *(*(res + i) + k) = BELONG;
        }
    }
}
void showResult(int **res , int *item , int n , int K)
{
    int k = K;
    printf("There is");
    for(int i = n ; i > 0 ; --i){
        if(*(*(res + i) + k) == BELONG){
            printf("item%d: " , i);
            k = k - *(item + i - 1);
        }
    }
}
