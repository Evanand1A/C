#include <stdio.h>
// Q11. Convert kilograms into grams
int main()
{
    float kg;
    printf("Enter weight in kilograms: ");
    scanf("%f",&kg);
    printf("Grams = %.2f\n",kg*1000);
    return 0;
}
