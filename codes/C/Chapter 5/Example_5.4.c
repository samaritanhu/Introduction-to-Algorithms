#include <stdio.h>
#include <stdlib.h>
#include "Example_5.4.h"

void Mapping(int* S , int* f , int n)
{
    int c[n];
    int queue[100];
    int len;
    for(int i = 0 ; i < n ; ++i)
        c[i]=0;
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
    }
}
