#include <stdio.h>

int main()
{
    int i,j,rows,k=1;
    printf("enter the number of rows of the pattern: ");
    fflush(stdout);
    scanf("%d",&rows);
    for (i=1;i<rows+1;i++)
    {
        for(j=1;j<i+1;j++)
            printf("%d ",k++);
        printf("\n");
    }
    return 0;

}