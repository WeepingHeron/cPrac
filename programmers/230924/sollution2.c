// 외계행성의 나이

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int age)
{
    int i;
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char) * 5);
    if (answer == NULL)
        return NULL;
    sprintf(answer, "%d", age);
    for (i = 0; i < strlen(answer); i++)
        answer[i] += 49;
    answer[i + 1] = 0;
    return answer;
}