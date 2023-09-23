#include <stdio.h>

int main()
{
    int i,n,sum=0;
    printf("Test Data :");
    fflush(stdout);
    scanf("%d",&n);
    printf("The first %d natural number is :\n",n);
    fflush(stdout);
    for (i=1;i<n+1;i++)
    {
        printf("%d",i);
        sum+=i;
    }
    printf("\nThe Sum of Natural Number upto %d terms : %d",n,sum);
    fflush(stdout);
    return 0;
}