# !/usr/bin/python
# -*- coding:utf-8 -*-
# Copyright 2026 Xinyi
# Author  : Xinyi Hu
# Contact : samaritanhu@gmail.com
# Time    : 2026/07/21 10:00

import queue

def MaximalInducedSubgraph(adj, n, k):
    '''
    adj: adjacency list, adj[i] is an iterable of the neighbors of vertex i (0-indexed)
    n: number of vertices
    k: every remaining vertex must have degree >= k in the induced subgraph

    Returns the set U of vertices (0-indexed) of the maximal induced subgraph
    H = (U, F) such that every vertex in H has degree >= k. U is empty if no
    such non-empty subgraph exists.
    '''
    degree = [len(adj[i]) for i in range(n)]
    removed = [False] * n
    Queue = queue.Queue()
    for i in range(n):
        if degree[i] < k:
            removed[i] = True
            Queue.put(i)
    while not Queue.empty():
        u = Queue.get()
        for v in adj[u]:
            if not removed[v]:
                degree[v] -= 1
                if degree[v] < k:
                    removed[v] = True
                    Queue.put(v)
    return {i for i in range(n) if not removed[i]}
