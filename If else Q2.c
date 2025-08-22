#include <stdio.h>
/* Question 2:
   Find out largest and smallest of three values. */
int main(void) {
    double a, b, c, largest, smallest;
    printf("Enter three values: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    largest = a;
    if (b > largest) largest = b;
    if (c > largest) largest = c;

    smallest = a;
    if (b < smallest) smallest = b;
    if (c < smallest) smallest = c;

    printf("Largest: %.2f\nSmallest: %.2f\n", largest, smallest);
    return 0;
}
