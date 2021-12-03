#include <stdio.h>

int main(void)
{
    int x = 100;
    printf("10진수로 출력 : %d\n", x);
    printf("8진수로 출력 : %o\n", x); // %d = 8진수
    printf("16진수로 출력 : %x\n", x); // %x = 16진수
    return 0;
}