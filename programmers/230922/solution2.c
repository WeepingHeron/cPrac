// 아이스 아메리카노

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int money) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * 2);
    
    if (0 < money && money < 5500)
    {
        answer[0] = 0;
        answer[1] = money;
    }
    else
    {
        answer[0] = money / 5500;
        answer[1] = money % 5500;
    }
    free;
    return answer;
}