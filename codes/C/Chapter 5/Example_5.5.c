#include "Example_5.5.h"

int Celebrity(bool** relationship , int n)
{
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
        return candidate + 1;
    else
        return -1;
}
