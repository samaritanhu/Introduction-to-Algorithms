#include <stdio.h>
#include <stdlib.h>

/*问题：给定一个集合A和一个从A到自身的映射f，寻找元素个数最多的一个子集S包含于A。
S满足通过f得到的S→S是一个双射。*/
int main()
{
    int n;
    int* f = NULL;
    int* S = NULL;
    int* c = NULL;
    int queue[100];
    int len = 0;
    printf("请输入f内元素的个数n:");
    scanf("%d" , &n);
    f = (int *)malloc(n * sizeof(int));
    S = (int *)malloc(n * sizeof(int));
    c = (int *)malloc(n * sizeof(int));
    printf("请输入f内的元素，以空格隔开：\n");
    for(int i = 0 ; i < n ; ++i)
        scanf("%d" , f + i);
    for(int i = 0 ; i < n ; ++i)
        f[i]--;
    for(int i = 0 ; i < n ; ++i){
        S[i] = 1;
        c[i] = 0;
    }
    for(int i = 0 ; i < n ; ++i)
        ++c[f[i]];
    for(int i = 0 ; i < n ; ++i){
        if(c[i] == 0){
            queue[len++] = i;
        }
    }
    int k = 0;
    while(k < len){
        S[queue[k]] = 0;
        c[f[queue[k]]]--;
        if(c[f[queue[k]]] == 0)
            queue[len++] = f[queue[k]];
        k++;
        printf("\n");
    }
    for(int i = 0 ; i < n ; ++i)
        if(S[i])
            printf("%d " , i + 1);
    free(f);
    free(S);
    free(c);
    f = NULL;
    S = NULL;
    c = NULL;
}
