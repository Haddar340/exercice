#include <stdio.h>

int main()
{
    int i,j,n;
    int sum=0;
    printf("Input number of terms: ");
    fflush(stdout);
    scanf("%d",&n);
    printf("The odd numbers are :");
    for (i=1;i<(2*n)+1;i++)
    {
            if ((i%2) != 0)
            {
                printf("%d",i);
                sum +=i;
            }
    }
    printf("\nThe Sum of odd Natural Number upto %d terms : %d",n,sum);
    return 0;
}