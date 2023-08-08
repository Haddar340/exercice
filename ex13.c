#include <stdio.h>

int main()
{
    int i,nbr,Mult;
    printf("Input the number (Table to be calculated) :");
    fflush(stdout);
    scanf("%d",&nbr);
    for(i=1;i<11;i++)
    {
        Mult=nbr*i;
        printf("%d X %d = %d\n",nbr,i,Mult);
    }
    return 0;
}