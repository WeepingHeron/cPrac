// 문자 반복 출력하기ㅣ

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int n)
{
    int i;
    int j;
    size_t my_string_len = strlen(my_string);
    size_t answer_len = my_string_len * n;
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char) * (answer_len + 1));
    if (answer == NULL)
        return NULL;
    
    for (i = 0; i < answer_len; i++)
    {
        answer[i] = my_string[i / n];
    }
    answer[answer_len] = 0;
    return answer;
}