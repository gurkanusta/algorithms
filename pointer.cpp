#include <stdio.h>

int main(void) {
    int x = 12;
    int *p1;
    p1 = &x;
    
    printf("degiskenin degeri: %d\n", x);
    printf("isaretcinin degeri: %d\n", *p1);
    
    printf("degiskenin adresi: %p\n", (void*)&x);
    printf("isaretcinin adresi: %p\n", (void*)p1);
    
    *p1 = *p1 + 1;
    
    printf("degiskenin yeni degeri: %d\n", x);
    return 0;
}

