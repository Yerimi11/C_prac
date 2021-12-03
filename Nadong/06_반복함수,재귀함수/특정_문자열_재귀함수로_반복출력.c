#include <stdio.h>

// 재귀 함수 (Recursive Function)
void print(int count)
{
    if(count == 0)
    {
        return;
    }
    else
    {
        printf("문자열을 출력합니다. \n");
        print(count - 1); // 재귀
    }
}

int main(void)
{
    int number;
    printf("문자열을 몇 개 출력할까요?");
    scanf("%d", &number);
    print(number); // 재귀
    return 0;
}