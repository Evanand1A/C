#include <stdio.h>
// Q14. Convert Celsius into Fahrenheit: F = (9/5 × C) + 32
int main()
{
    float c;
    printf("Enter temperature in Celsius: ");
    scanf("%f",&c);
    printf("Fahrenheit = %.2f\n",(9.0/5.0*c)+32);
    return 0;
}
