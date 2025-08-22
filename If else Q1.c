#include <stdio.h>
/* Question 1:
   Find out largest and smallest of two values. */
int main(void) {
    double a, b;
    printf("Enter two values: ");
    scanf("%lf %lf", &a, &b);
    if (a > b) {
        printf("Largest: %.2f\nSmallest: %.2f\n", a, b);
    } else if (b > a) {
        printf("Largest: %.2f\nSmallest: %.2f\n", b, a);
    } else {
        printf("Both values are equal: %.2f\n", a);
    }
    return 0;
}
