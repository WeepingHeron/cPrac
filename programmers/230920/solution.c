#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len)
{
    if (array_len == 1)
        return array[0];

    int answer = array[0]; // 초기값을 배열의 첫 번째 원소로 설정
    int maxFreq = 1;      // 현재까지의 최빈값의 빈도수
    int currentFreq = 1;  // 현재 숫자의 빈도수

    for (int i = 0; i < array_len - 1; i++)
    {
        currentFreq = 1; // 현재 숫자의 빈도수를 1로 초기화
        for (int j = i + 1; j < array_len; j++)
        {
            if (array[i] == array[j])
                currentFreq++;
        }
        if (currentFreq > maxFreq)
        {
            maxFreq = currentFreq;
            answer = array[i];
        }
        else if (currentFreq == maxFreq && answer != array[i])
        {
            answer = -1; // 최빈값이 여러 개인 경우
        }
    }

    return answer;
}

int main()
{
    int arr1[] = {1, 2, 3, 3, 3, 4};
    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Result 1: %d\n", solution(arr1, len1)); // Output: 3

    int arr2[] = {1, 1, 2, 2};
    int len2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Result 2: %d\n", solution(arr2, len2)); // Output: -1

    return 0;
}