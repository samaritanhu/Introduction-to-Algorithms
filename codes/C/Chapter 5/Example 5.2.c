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
    printf("这是例5.2多项式求值，在每次的输入时输入q即可退出程序。\n请先输入x的值：");
    myInput(&x);
    printf("接下来要输入a0到an.\n请先输入a的下标n:");
    if(!(scanf("%d" , &n))){
        printf("程序已结束，即将退出,bye~\n");
        exit(EXIT_SUCCESS);
    }
    a = (float *)malloc((n + 1) * sizeof(float));
    if(a == NULL){
        printf("error when malloc");
        exit(EXIT_FAILURE);
    }
    printf("接下来输入a0到an.\n");
    for(int i = 0 ; i <= n ; ++i){
        printf("a%d:" , i);
        myInput(a + i);
    }
    result = sum(x , a , n);
    printf("计算结果是：%f" , result);
    free(a);
}
void myInput(float *input)
{
    char c;
    if(!(scanf("%f" , input))){
        printf("程序已结束，即将退出,bye~\n");
        exit(EXIT_SUCCESS);
    }
    while((c = getchar()) != '\n') /*处理输入行中多余字符*/
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
