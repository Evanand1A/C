#include <stdio.h>
// Q18. Calculate area and perimeter of a rectangle
int main()
{
    int l,b;
    printf("Enter length: ");
    scanf("%d",&l);
    printf("Enter breadth: ");
    scanf("%d",&b);
    printf("Area = %d\n",l*b);
    printf("Perimeter = %d\n",2*(l+b));
    return 0;
}
