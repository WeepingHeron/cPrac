// 배열 자르기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int* solution(int numbers[], size_t numbers_len, int num1, int num2)
{
    int i;
    int j;
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * (num2 - num1 + 2));
    if (answer == NULL)
        return NULL;
    j = 0;
    for (i = num1; i <= num2; i++)
    {
        answer[j] = numbers[i];
        j++;
    }
    answer[num2 - num1 + 2] = 0;
    return answer;
}