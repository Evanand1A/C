#include <stdio.h>
// Q12. Convert grams into kilograms
int main(){
    float grams;
    printf("Enter weight in grams: ");
    scanf("%f",&grams);
    printf("Kilograms = %.2f\n",grams/1000);
    return 0;
}
