#include <stdio.h>
#include <stdlib.h>

/*���⣺����һ������A��һ����A�������ӳ��f��Ѱ��Ԫ�ظ�������һ���Ӽ�S������A��
S����ͨ��f�õ���S��S��һ��˫�䡣*/
int main()
{
    int n;
    int* f = NULL;
    int* S = NULL;
    int* c = NULL;
    int queue[100];
    int len = 0;
    printf("������f��Ԫ�صĸ���n:");
    scanf("%d" , &n);
    f = (int *)malloc(n * sizeof(int));
    S = (int *)malloc(n * sizeof(int));
    c = (int *)malloc(n * sizeof(int));
    printf("������f�ڵ�Ԫ�أ��Կո������\n");
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
