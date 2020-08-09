# !/usr/bin/python
# -*- coding:utf-8 -*-
# Copyright 2020 Xinyi
# Author  : Xinyi Hu
# Contact : samaritanhu@gmail.com
# Time    : 2020/08/09 13:38

import queue
def Algorithm_Mapping(f,n):
    S = [i for i in range(n)]
    c = [0 for i in range(n)]
    for i in range(n):
        c[f[i]] += 1
    Queue = queue.Queue()
    for j in range(n):
        if c[j] == 0:
            Queue.put(j)
    while not Queue.empty():
        i = Queue.get()
        S.remove(i)
        c[f[i]] -= 1
        if c[f[i]] == 0: Queue.put(f[i])      
    return S