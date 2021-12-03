#include <stdio.h>

int main(void)
{
    char x = 65; // ASCII code 65 == 'A'
    printf("%c\n", x);
    char y = 65;
    printf("%c\n", y);
    char z = 'B';
    printf("%c\n", z); // %c : 문자형 -> 'B'
    printf("%d\n", z); // %d : 정수형 -> '66'
    return 0;
}