#ifndef EXAMPLE_53

    #define EXAMPLE_53

    #include <stdio.h>
    #include <stdlib.h>

// adj is the n x n adjacency matrix of an undirected graph (adj[i][j] is 1 if i and j are connected, 0 otherwise).
// n is the number of vertices.
// k is the minimum degree required of every vertex in the resulting induced subgraph.
// result is an array of length n. After the call, result[i] == 1 if vertex i belongs to the
// maximal induced subgraph in which every vertex has degree >= k, and 0 if it was removed.
// If every vertex ends up removed, no such non-empty subgraph exists.

void MaximalInducedSubgraph(int** adj, int n, int k, int* result);

#endif // EXAMPLE_53
