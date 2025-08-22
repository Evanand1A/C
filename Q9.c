#include <stdio.h>
// Q9. Convert rupees into dollars (1$ = 48 Rs)
int main()
{
    float rupees;
    printf("Enter amount in rupees: ");
    scanf("%f",&rupees);
    printf("Dollars = %.2f\n",rupees/48);
    return 0;
}
