#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n)
{
    int slice = 6;			// 조각 수
    int pizza = n / slice;	// 판 수
    
    if (n % slice == 0 && slice < n)
        pizza = n / slice;
    else
    {
        while (pizza * slice % n != 0 || pizza * slice < n)
            pizza++;
    }
    return pizza;
}