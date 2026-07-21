#include "Example_5.3.h"

void MaximalInducedSubgraph(int** adj, int n, int k, int* result)
{
    int degree[n];
    int queue[n];
    int len = 0;
    for(int i = 0 ; i < n ; ++i){
        result[i] = 1;
        degree[i] = 0;
        for(int j = 0 ; j < n ; ++j)
            degree[i] += adj[i][j];
    }
    for(int i = 0 ; i < n ; ++i){
        if(degree[i] < k){
            result[i] = 0;
            queue[len++] = i;
        }
    }
    int head = 0;
    while(head < len){
        int u = queue[head++];
        for(int v = 0 ; v < n ; ++v){
            if(adj[u][v] && result[v]){
                degree[v]--;
                if(degree[v] < k){
                    result[v] = 0;
                    queue[len++] = v;
                }
            }
        }
    }
}
