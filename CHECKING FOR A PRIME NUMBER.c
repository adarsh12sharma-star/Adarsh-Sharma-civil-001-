#include <stdio.h>

int main() {
    int x, isprime = 1;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x <= 1) {
        isprime = 0;
    } else {
        for (int i = x - 1; i > 1; i--){
            if (x % i == 0){ 
                isprime = 0; 
                i=0;
    }}}

    if (isprime) {
        printf("%d is a prime number.\n", x);
    } else {
        printf("%d is not a prime number.\n", x);
    }
 return 0;
}
