// 피자 나눠 먹기 (3)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int slice, int n)
{
    int pizza = n / slice;
    
    if (slice > n)
        pizza = 1;
    else
    {
        while (pizza * slice < n)
            pizza++;
    }    
    return pizza;
}