#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void myInput(float *input);
double sum(float x , float *a , int n);
int main()
{
    float x;
    float *a = NULL;
    int n;
    double result;
    printf("You can quit with entering q.Input x:");
    myInput(&x);
    printf("Input n:");
    if(!(scanf("%d" , &n))){
        printf("quit soon,bye~\n");
        exit(EXIT_SUCCESS);
    }
    a = (float *)malloc((n + 1) * sizeof(float));
    if(a == NULL){
        printf("error when malloc");
        exit(EXIT_FAILURE);
    }
    printf("Input from a0 to an.\n");
    for(int i = 0 ; i <= n ; ++i){
        printf("a%d:" , i);
        myInput(a + i);
    }
    result = sum(x , a , n);
    printf("There result is %f." , result);
    free(a);
}
void myInput(float *input)
{
    char c;
    if(!(scanf("%f" , input))){
        printf("quit soon,bye~\n");
        exit(EXIT_SUCCESS);
    }
    while((c = getchar()) != '\n')
        continue;
}
double sum(float x , float *a ,int n)
{
    long double result = 0;
    for(; n >= 0 ; --n){
        result = result * x + *(a + n);
    }
    return result;
}
