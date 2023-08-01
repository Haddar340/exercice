#include <stdio.h>
#include <math.h>

int main()
{
    int i,n,c;
    printf("Input number of terms :");
    fflush(stdout);
    scanf("%d",&n);
    for (i=1;i<n+1;i++)
    {
        c=pow(i,3);
        printf("Number is : %d and cube of the %d is :%d\n",i,i,c);
        fflush(stdout);
    }
    return 0;
}