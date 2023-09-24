// 진료 순서 정하기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// emergency_len은 배열 emergency의 길이입니다.
int* solution(int emergency[], size_t emergency_len)
{
    int i;
    int j;
    int rank;
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * (emergency_len + 1));
    if (answer == NULL)
        return NULL;
    
    for (i = 0; i < emergency_len; i++)
    {
        rank = 1;
        for (j = 0; j < emergency_len; j++)
        {
            if (emergency[i] < emergency[j])
                rank++;
        }
        answer[i] = rank;
    }
    answer[emergency_len] = 0;
    return answer;
}