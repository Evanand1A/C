#include <stdio.h>
// Q5. Add, subtract, multiply, and divide two numbers
int main()
{
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Sum = %d\n",a+b);
    printf("Difference = %d\n",a-b);
    printf("Product = %d\n",a*b);
    if(b!=0){
        printf("Quotient = %d\n",a/b);
    }else{
        printf("Division not possible (denominator is zero).\n");
    }
    return 0;
}
