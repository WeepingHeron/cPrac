// 특정 문자 제거하기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, const char* letter)
{
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int i;
    int answer_idx = 0;
    size_t my_string_len = strlen(my_string);
    char* answer = (char*)malloc(sizeof(char) * (my_string_len + 1));
    if (answer == NULL)
        return NULL;
    
    for (i = 0; i < my_string_len; i++)
    {
        if (my_string[i] != *letter)
        {
            answer[answer_idx] = my_string[i];
            answer_idx++;
        }
    }
    
    answer[answer_idx] = 0;
    
    return answer;
}