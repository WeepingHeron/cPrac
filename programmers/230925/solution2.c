// 모스부호 (1)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* letter)
{
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    
    char*   morse[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    int     idx = 0;
    char*   answer = (char*)malloc(sizeof(char) * 1001);
    if (answer == NULL)
        return NULL;
    char*   cut_morse = strtok(letter, " ");
    memset(answer, 0, 1001);
    
    while (cut_morse != 0)
    {
        for (int i = 0; i < 26; i++)
        {
            if (strcmp(cut_morse, morse[i]) == 0)
            {
                answer[idx++] = 97 + i;
                break ;
            }
        }
        cut_morse = strtok(NULL, " ");
    }
    answer[idx] = 0;
    return answer;
}