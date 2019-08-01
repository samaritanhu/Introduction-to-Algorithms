# !/usr/bin/python
# -*- coding:utf-8 -*-
# Copyright 2019 Xinyi
# Author  : Xinyi Hu
# Contact : samaritanhu@gmail.com
# Time    : 2019/08/01 13:38
def Polynomial_Evaluation(a, x):
    P = a[-1]
    for i in range(1, len(a)):
        P = x*P + a[-1-i]
    return P

def run():
    a = [2, 1]
    print('P is 2 + x')
    print('The result of P(1) is: ', Polynomial_Evaluation(a, 1))

run()
