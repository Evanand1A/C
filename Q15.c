#include <stdio.h>
// Q15. Convert Fahrenheit into Celsius: C = 5/9 × (F − 32)
int main()
{
    float f;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&f);
    printf("Celsius = %.2f\n",(5.0/9.0)*(f-32));
    return 0;
}
