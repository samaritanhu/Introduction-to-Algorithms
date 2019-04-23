#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*Problem: Given a n-times-n matrix, determine whether there exists an i,
which satisfies that all elements in column i (except item a(ii)) are 1, and all elements in line i (except item a(ii)) are 0.*/
int main() {
    int n;
    int** mat = NULL;
    printf("Input the number of the people:");
    scanf("%d" , &n);
    mat = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; ++i) {
        *(mat + i) = (int *)malloc(n * sizeof(int));
    }
    if(mat == NULL){
        printf("malloc failure.");
        exit(EXIT_FAILURE);
    }
    printf("Input a n-times-n matrix(every elements should be distinguished by a space) to show the relationship.\n\
If i knows j, a(ij) equals 1,or it equals 0.\n");
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
        printf("i is :" , candidate + 1);
    else
        printf("There doesn't exist such an i.");
    for (int i = 0; i < n; ++i) {
        free(*(mat + i));
    }
    free(mat);
    mat = NULL;
}
