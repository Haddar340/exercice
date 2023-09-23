#include <stdio.h>

int main()
{
    int i,j,rows;
    printf("enter the number of rows of the pattern: ");
    fflush(stdout);
    scanf("%d",&rows);
    for (i=0;i<rows+1;i++)
    {
        for(j=0;j<i+1;j++)
            printf("*");
        printf("\n");
    }
    return 0;

}