#include <stdio.h>
// Q20. Calculate area of a triangle: A = 1/2 × L × B
int main(){
    float l,b;
    printf("Enter base: ");
    scanf("%f",&b);
    printf("Enter height: ");
    scanf("%f",&l);
    printf("Area = %.2f\n",0.5*l*b);
    return 0;
}
