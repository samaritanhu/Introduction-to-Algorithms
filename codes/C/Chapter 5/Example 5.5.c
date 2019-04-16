#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*问题：给定一个n×n的连结矩阵，确定是否存在一个i，其满足在第i列所有项（除了第ii项）都为1，并且第i行所有项（除了ii项）都为0.*/
int main() {
    int n;
    int** mat = NULL;
    printf("请先输入人数n:");
    scanf("%d" , &n);
    mat = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; ++i) {
        *(mat + i) = (int *)malloc(n * sizeof(int));
    }
    if(mat == NULL){
        printf("malloc failure.");
        exit(EXIT_FAILURE);
    }
    printf("接下来输入一个n*n的矩阵用来表示人际关系，每两个数之间以空格隔开。\n如果i知道j，则ij项为1，否则为0.\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d" , *(mat + i) + j);
        }
    }
    int i = 0;
    int j = 1;
    int next = 2;
    int candidate;
    bool notCelebrity = false;
    for (; next <= n; ++next) {
        if (*(*(mat + i) + j))
            i = next;
        else
            j = next;
    }
    if (i == n)
        candidate = j;
    else
        candidate = i;
    *(*(mat + candidate) + candidate) = 0;
    for (int k = 0; !notCelebrity && k < n; ++k) {
        if(*(*(mat + candidate) + k))
            notCelebrity = true;
            if (!(*(*(mat + k) + candidate)))
                if (candidate != k)
                    notCelebrity = true;
    }
    if (!notCelebrity)
        printf("社会名流是第%d人" , candidate + 1);
    else
        printf("没有社会名流。");
    for (int i = 0; i < n; ++i) {
        free(*(mat + i));
    }
    free(mat);
    mat = NULL;
}
