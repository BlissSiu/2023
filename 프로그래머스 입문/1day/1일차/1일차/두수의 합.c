/*
문제 설명
정수 num1과 num2가 주어질 때, num1과 num2의 합을 return하도록 soltuion 함수를 완성해주세요.

제한사항
-50,000 ≤ num1 ≤ 50,000
-50,000 ≤ num2 ≤ 50,000
*/

#include <stdio.h>
#include <stdbool.h> 
#include <stdlib.h> // 절대값을 구하는 abs 함수

int solution(int num1, int num2) {
    int answer = 0;
    if ((50000 >= abs(num1)) && (50000 >= abs(num2))) {
        answer = num1 + num2;
        return answer;
    }
}
