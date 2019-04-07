#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void myInput(float *input , int num);
double sum(float x , float *a , int n);
int main()
{
    float x;
    float *a = NULL;
    int n;
    double result;
    printf("这是例5.2多项式求值，在每次的输入时输入q即可退出程序。\n请先输入x的值：");
    myInput(&x , 0);
    printf("接下来要输入a0到an.\n请先输入a的下标n:");
    if(!(scanf("%d" , &n))){
        printf("程序已结束，即将退出,bye~\n");
        exit(EXIT_SUCCESS);
    }
    a = (float *)malloc((n + 1) * sizeof(float));
    printf("接下来输入a0到an.\n");
    for(int i = 0 ; i <= n ; ++i){
        printf("a%d:" , i);
        myInput(a + i , 0);
    }
    result = sum(x , a , n);
    printf("计算结果是：%f" , result);
    free(a);
}
void myInput(float *input , int num)
{
    for(int i = 0 ; i <= num ; ++i)
        if(!(scanf("%f" , input + num))){
            printf("程序已结束，即将退出,bye~\n");
            exit(EXIT_SUCCESS);
        }
}
double sum(float x , float *a ,int n)
{
    long double result = 0;
    for(; n >= 0 ; --n){
        result = result * x + *(a + n);
    }
    return result;
}
