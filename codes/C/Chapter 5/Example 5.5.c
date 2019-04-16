#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*���⣺����һ��n��n���������ȷ���Ƿ����һ��i���������ڵ�i����������˵�ii���Ϊ1�����ҵ�i�����������ii���Ϊ0.*/
int main() {
    int n;
    int** mat = NULL;
    printf("������������n:");
    scanf("%d" , &n);
    mat = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; ++i) {
        *(mat + i) = (int *)malloc(n * sizeof(int));
    }
    if(mat == NULL){
        printf("malloc failure.");
        exit(EXIT_FAILURE);
    }
    printf("����������һ��n*n�ľ���������ʾ�˼ʹ�ϵ��ÿ������֮���Կո������\n���i֪��j����ij��Ϊ1������Ϊ0.\n");
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
        printf("��������ǵ�%d��" , candidate + 1);
    else
        printf("û�����������");
    for (int i = 0; i < n; ++i) {
        free(*(mat + i));
    }
    free(mat);
    mat = NULL;
}
