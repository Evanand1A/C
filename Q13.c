#include <stdio.h>
// Q13. Convert bytes into KB, MB, and GB
int main()
{
    long bytes;
    printf("Enter size in bytes: ");
    scanf("%ld",&bytes);
    printf("Kilobytes = %.2f\n",bytes/1024.0);
    printf("Megabytes = %.2f\n",bytes/(1024.0*1024));
    printf("Gigabytes = %.2f\n",bytes/(1024.0*1024*1024));
    return 0;
}
