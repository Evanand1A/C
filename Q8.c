#include <stdio.h>
// Q8. Convert dollars into rupees (1$ = 48 Rs)
int main()
{
    float dollars;
    printf("Enter amount in dollars: ");
    scanf("%f",&dollars);
    printf("Rupees = %.2f\n",dollars*48);
    return 0;
}
