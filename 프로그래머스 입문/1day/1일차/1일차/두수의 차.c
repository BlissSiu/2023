/*���� ����
���� num1�� num2�� �־��� ��, num1���� num2�� �� ���� return�ϵ��� soltuion �Լ��� �ϼ����ּ���.

���ѻ���
- 50000 �� num1 �� 50000
- 50000 �� num2 �� 50000
*/



#include <stdio.h>
#include <stdbool.h> 
#include <stdlib.h>

int solution(int num1, int num2) {
    int answer = 0;
    if ((50000 >= abs(num1)) && (50000 >= abs(num2))) {
        answer = num1 - num2;
        return answer;
    }
}