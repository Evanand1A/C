#include <stdio.h>
// Q21. Calculate net salary: gross salary + allowance − deduction
int main(){
    float gross,allowance,deduction,net;
    printf("Enter gross salary: ");
    scanf("%f",&gross);
    printf("Enter allowance: ");
    scanf("%f",&allowance);
    printf("Enter deduction: ");
    scanf("%f",&deduction);
    net = gross + allowance - deduction;
    printf("Net Salary = %.2f\n",net);
    return 0;
}
