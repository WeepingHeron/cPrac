// 구슬을 나누는 경우의 수

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int balls, int share) {
    int answer = 0;
    __int128 i, np = 1, mp = 1, nmmp = 1;
    
    for (i = 1; i <= balls; i++)
        np *= i;
    for (i = 1; i <= share; i++)
        mp *= i;
    for (i = 1; i <= balls - share; i++)
        nmmp *= i;
    answer = np / (mp * nmmp);
    return answer;
}