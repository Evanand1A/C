#include <stdio.h>
// Q19. Calculate area of a circle: A = 22/7 × R × R
int main()
{
    float r;
    printf("Enter radius: ");
    scanf("%f",&r);
    printf("Area = %.2f\n",(22.0/7.0)*r*r);
    return 0;
}
