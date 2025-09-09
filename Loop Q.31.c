#include <stdio.h>
/* Q31. Find out summation of prime numbers between 1 and 500 */
int main(){
    int i,j,f,s=0;
    for(i=2;i<=500;i++){
        f=0;
        for(j=2;j<=i/2;j++){
            if(i%j==0){f=1;break;}
        }
        if(f==0) s=s+i;
    }
    printf("Sum=%d",s);
    return 0;
}
