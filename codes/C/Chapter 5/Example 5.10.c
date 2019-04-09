#include <stdio.h>
#include <stdlib.h>
#define FALSE 0
#define EXIST 1
#define BELONG 2

void myInput(int *input);
void knapsack(int **res , int *item , int n , int K);
void showResult(int **res , int *item ,int n ,int K);
int main()
{
    int K;
    int n;
    int *S = NULL;
    int **P = NULL;
    printf("这是例5.10动态规划的程序，我们不妨让背包大小和每个物品大小都是整数。\n输入q退出。");
    printf("请先输入背包大小K：");
    myInput(&K);
    printf("接下来请输入物品个数n:");
    myInput(&n);
    S = (int *)malloc(n * sizeof(int));
    if(S == NULL){
        printf("error when malloc.");
        exit(EXIT_FAILURE);
    }
    printf("接下来输入每个物品的大小\n");
    for(int i = 0 ; i < n ; ++i){
        printf("第%d个物品：", i + 1);
        myInput(S + i);
    }
    P = (int **)malloc((n + 1) * sizeof(int *));   /*绘制一个大表格来记录每一种情况*/
    for(int i = 0 ; i <= n ; ++i)
        *(P + i) = (int *)malloc((K + 1) * sizeof(int));
    if(P == NULL){
        printf("error when malloc.");
        exit(EXIT_FAILURE);
    }
    knapsack(P , S , n , K);   /*遍历填满动态规划的表格，复杂度O(Kn)*/
    if(*(*(P + n) + K))
        showResult(P , S ,n , K);  /*回溯输出一个符合要求的子集*/
    else
        printf("不存在一种装法能使得背包正好装满。");
    for(int i = 0 ; i <= n ; ++i)
        free(*(P + i));
    free(P);
    free(S);
}
void myInput(int *input)
{
    char c;
    if(!(scanf("%d" , input))){
        printf("程序即将退出,bye~.");
        exit(EXIT_SUCCESS);
    }
    while((c = getchar()) != '\n')  /*处理输入行内多余字符*/
        continue;
}
void knapsack(int **res , int *item , int n , int K)
{
    **res = EXIST;  /*初始化数组*/
    for(int i = 1 ; i <= K ; ++i)
        *(*res + i) = FALSE;
    for(int i = 1 ; i <= n ; ++i){
        for(int k = 0 ; k <= K ; ++k){  /*对n个物品和从0到K的背包大小进行遍历*/
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
    printf("包内有");
    for(int i = n ; i > 0 ; --i){
        if(*(*(res + i) + k) == BELONG){
            printf("第%d个物品 " , i);
            k = k - *(item + i - 1);
        }
    }
}
