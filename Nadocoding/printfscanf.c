#include <stdio.h>
int main(void)
{
    // 정수형 변수에 대한 예제
    /* int age = 12;
    printf("%d\n", age);
    age = 13;
    printf("%d\n", age);
    return 0; */

    // 실수형 변수에 대한 예제
    // float x = 46.5f; # 4바이트 저장
    // printf("%.2f\n", x); 
    // double d = 4.428; # 8바이트 저장해서 4.43으로 나옴
    // printf("%.2lf\n", d);

    // 상수 (변경할 수 없는 int)
    // const int YEAR = 2000;
    // printf("태어난 년도 : %d\n", YEAR);
    // YEAR = 2001 변경 불가능

    // printf
    // 연산
    // int add = 3 + 7; // 10
    // printf("3 + 7 = %d\n", add);
    // printf("%d + %d = %d\n", 3, 7, 3 + 7);
    // printf("%d * %d = %d\n", 3, 7, 3 * 7);

    // int input;
    // printf("값을 입력하세요 : ");
    // scanf("%d", &input);
    // printf("입력값 : %d\n", input);

    // int one, two, three;
    // printf("3개의 정수를 입력하세요 : ");
    // scanf("%d %d %d", &one, &two, &three);
    // printf("첫번째 값 : %d\n", one);
    // printf("두번째 값 : %d\n", two);
    // printf("세번째 값 : %d\n", three);
    
    // 문자(한 글자), 문자열(한 글자 이상의 여러 글자)
    // char c = 'A';
    // printf("%c\n", c);
    
    // char str[256]; // 배열
    // scanf("%s", str, sizeof(str)); // 문자열 입력받음, 256개의 문자열만 입력받겠다
    // printf("%s\n", str);
    return 0;
}