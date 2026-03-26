#include <stdio.h>
int main() {
    int num, temp, i = 0;
    int a[10];
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0) {
        a[i] = temp % 10;
        temp = temp / 10;
        i++;
    }
    for (int j = 0; j < i / 2; j++) {
        if (a[j] != a[i - j - 1]) {
            printf("Not Palindrome");
            return 0;}
    }
    printf("Palindrome");
    return 0;
}
