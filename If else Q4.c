#include <stdio.h>
/* Question 4:
   Find out whether a given number is divisible by 7 or not. */
int main(void) {
    long long n;
    printf("Enter a number: ");
    scanf("%lld", &n);

    if (n % 7 == 0) {
        printf("%lld is divisible by 7\n", n);
    } else {
        printf("%lld is not divisible by 7\n", n);
    }
    return 0;
}
