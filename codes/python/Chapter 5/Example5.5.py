def Celebrity(Know):
    '''
    parameters: Know is a (n, n) numpy ndarray. Know[i,j] == 1 means that People No.i+1 knows People No.j+1. 
    
    Output: who is the celebrity of n people.
    '''
    n = Know.shape[0]
    i = 0
    j = 1
    nexts = 2
    while nexts <= n:
        if Know[i,j]: 
            i = nexts
        else: 
            j = nexts
        nexts += 1
    if i == n:
        candidate = j
    else:
        candidate = i
    # check whether people is celebrity
    wrong = False
    k = 0
    Know[candidate, candidate] = False
    while not wrong and k < n:
        if Know[candidate, k]:
            wrong = True
        if not Know[k, candidate]:
            if candidate != k: 
                wrong = True
        k += 1
    if not wrong: 
        celebrity = candidate + 1
    else: 
        celebrity = 0
    return celebrity
            