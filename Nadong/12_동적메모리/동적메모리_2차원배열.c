#include <stdio.h>
#include <stdlib.h>

int main(void)
{ // 동적메모리 할당
    int i, x, y;
    int** pptr = (int**)malloc(sizeof(int*) * 8);
    for(i = 0; i < 8; i++)
    {
        *(pptr + i) = (int *)malloc(sizeof(int) * 6);
    }

// 동적메모리 할당 초기화 처리 (0~47번 각각 채워줌)
    for(y = 0; y < 8; y++)
    {
        for(x = 0; x < 6; x++)
        {
            *(*(pptr + y) + x) = 6 * y + x;
        }
    }

// 초기화한 값 출력 (0~47)
    for(y = 0; y < 8; y++)
    {
        for(x = 0; x < 6; x++)
        {
            printf("%3d", *(*(pptr + y) + x));
        }
    }

    for(y = 0; y < 8; y++)
    {
        free(*(pptr + y)); // 할당 해제
    }
    return 0;
}