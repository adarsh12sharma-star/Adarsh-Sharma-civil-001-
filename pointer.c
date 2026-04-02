#include <stdio.h>

int main() {
    int a = 2;
    int *p;

    p = &a;

    printf("Value of a = %d\n", a);
    printf("Value of p (address of a) = %p\n", p);
    printf("Value at address p (*p) = %d\n", *p);
    printf("Address of a (&a) = %p\n", &a);

    return 0;
}
