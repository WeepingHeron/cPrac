// 개미 군단

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int hp)
{
    int answer = 0;
    while (hp != 0)
    {
        if (5 <= hp)
        {
            answer ++;
            hp -= 5;
        }
        else if (3 <= hp)
        {
            answer ++;
            hp -= 3;
        }
        else
        {
            answer += hp;
            hp = 0;
        }
    }
    return answer;
}