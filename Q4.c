#include <stdio.h>
// Q4. Divide two numbers
int main(){
    int a,b;
    printf("Enter numerator: ");
    scanf("%d",&a);
    printf("Enter denominator: ");
    scanf("%d",&b);
    if(b!=0){
        printf("Quotient = %d\n",a/b);
    }else{
        printf("Division by zero is not allowed.\n");
    }
    return 0;
}
