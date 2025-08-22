#include <stdio.h>
// Q17. Calculate area and perimeter of a square
int main()
{
    int l;
    printf("Enter side length of square: ");
    scanf("%d",&l);
    printf("Area = %d\n",l*l);
    printf("Perimeter = %d\n",4*l);
    return 0;
}
