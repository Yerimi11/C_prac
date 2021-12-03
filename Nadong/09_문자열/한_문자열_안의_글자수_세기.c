#include <stdio.h>

int main(void)
{
    char input[1001]; 
    gets(input); // 하나씩 문자열 배열에 넣어줌
    int count = 0;
    while(input[count] != '\0') // 배열의 빈칸은 \0(null) 채워줌, null을 만날 때 까지(문자열 인풋 끝날 때 까지) count 1씩 증가
    {
        count++;
    }
    printf("입력한 문자열의 길이는 %d입니다.", count);
    printf("입력한 문자열 : %s", input); // %s : string(문자열)
    return 0;
}