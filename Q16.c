#include <stdio.h>
// Q16. Calculate interest where I = PRT / 100
int main()
{
    float p,r,t;
    printf("Enter principal: ");
    scanf("%f",&p);
    printf("Enter rate of interest: ");
    scanf("%f",&r);
    printf("Enter time (in years): ");
    scanf("%f",&t);
    printf("Interest = %.2f\n",(p*r*t)/100);
    return 0;
}
