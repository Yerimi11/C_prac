#include<stdio.h>

int main() {
    int a;
    int *p;
    p = &a;
    *p = 4;
    
    return 0;
}

// a = 4