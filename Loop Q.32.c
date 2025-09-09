#include <stdio.h>
/* Q32. Find out how many prime numbers are there between 1 and 500 */
int main(){
    int i,j,f,c=0;
    for(i=2;i<=500;i++){
        f=0;
        for(j=2;j<=i/2;j++){
            if(i%j==0){f=1;break;}
        }
        if(f==0) c++;
    }
    printf("Count=%d",c);
    return 0;
}
