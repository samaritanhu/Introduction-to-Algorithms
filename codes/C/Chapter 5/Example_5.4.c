#include "Example_5.4.h"

void Mapping(int* S, int* result, int* f , int n)
{
    int c[n];
    int queue[100];
    int len;
    for(int i = 0 ; i < n ; ++i){
        c[i]=0;
        result[i]=1;
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
        result[queue[k]] = 0;
        c[f[queue[k]]]--;
        if(c[f[queue[k]]] == 0)
            queue[len++] = f[queue[k]];
        k++;
    }
}

void showResult(int* S , int* result, int n)
{
    int flag = 0;
    for(int i = 0 ; i < n ; ++i){
        if(result[i] != 0)
            printf("%d " , i+1);
            flag = 1;
    }
    if(!flag)
        printf("There is not such an f.");
}
