// 가위 바위 보

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* rsp)
{
    int i;
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int     rsp_len = strlen(rsp);
    char*   answer = (char*)malloc(sizeof(char) * (rsp_len + 1));
    if (answer == NULL)
        return NULL;
    for (i = 0; i < rsp_len; i++)
    {
        if (rsp[i] == '2')
            answer[i] = '0';
        else if (rsp[i] == '0')
            answer[i] = '5';
        else
            answer[i] = '2';
    }
    answer[i] = 0;
    return answer;
}