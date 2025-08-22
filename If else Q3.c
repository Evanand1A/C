#include <stdio.h>
/* Question 3:
   General formula for Net Salary
   Net Salary = Gross Salary + Allowances - Deductions
   Allowances = Gross Salary * Allowance Rate
   Deductions = Gross Salary * Deduction Rate
   Rates depend on Gross Salary:
   >10000 → Allowance=10%, Deduction=3%
   >5000  → Allowance=7%, Deduction=2%
   else   → 0 */
int main(void) 
{
    double gross, allowanceRate, deductionRate, allowances, deductions, net;
    printf("Enter Gross Salary: ");
    scanf("%lf", &gross);

    if (gross > 10000) {
        allowanceRate = 0.10;
        deductionRate = 0.03;
    } else if (gross > 5000) {
        allowanceRate = 0.07;
        deductionRate = 0.02;
    } else {
        allowanceRate = 0.0;
        deductionRate = 0.0;
    }

    allowances = gross * allowanceRate;
    deductions = gross * deductionRate;
    net = gross + allowances - deductions;

    printf("Allowances = Gross Salary * Allowance Rate = %.2f * %.2f = %.2f\n", gross, allowanceRate, allowances);
    printf("Deductions = Gross Salary * Deduction Rate = %.2f * %.2f = %.2f\n", gross, deductionRate, deductions);
    printf("Net Salary = Gross Salary + Allowances - Deductions = %.2f + %.2f - %.2f = %.2f\n", gross, allowances, deductions, net);

    return 0;
}
