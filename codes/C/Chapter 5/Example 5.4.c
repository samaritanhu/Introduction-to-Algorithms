#include <stdio.h>
#include <stdlib.h>

/*Question: Given a set A and a mapping f from A to itself, find a subset S contained in A with the largest number of elements.
S satisfies that S -> S obtained through f is a bijective. */
int main()
{
    int n;
    int* f = NULL;
    int* S = NULL;
    int* c = NULL;
    int queue[100];
    int len = 0;
    printf("Input the number of the elements of f:");
    scanf("%d" , &n);
    f = (int *)malloc(n * sizeof(int));
    S = (int *)malloc(n * sizeof(int));
    c = (int *)malloc(n * sizeof(int));
    printf("Input the elements of f, distinguished by a space:\n");
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
