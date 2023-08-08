#include <stdio.h>

int main()
{
    int i,j,n;
    printf("Test Data :\nInput upto the table number starting from 1 : ");
    fflush(stdout);
    scanf("%d",&n);
    printf("Multiplication table from 1 to %d\n",n);
    fflush(stdout);
    for (i=1;i<11;i++)
    {
        for (j=1;j<n+1;j++)
        {
            printf("%dx%d = %d, ",j,i,i*j);
        }
    printf("\n");
    }

    return 0;
}