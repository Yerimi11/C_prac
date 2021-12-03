#include <stdio.h>

int main(void)
{
    int number, x, i, sum = 0;
    printf("정수의 개수를 입력하세요 : ");
    scanf("%d", &number);
    for(i = 0; i < number; i++) // 넘버까지니까 넘버만큼 수행됨
    {
        printf("정수의 값을 입력하세요 : ");
        scanf("%d", &x);
        sum += x;
    }
    printf("전체 정수의 값은 %d입니다. \n", sum);
    return 0;
}