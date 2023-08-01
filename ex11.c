#include <stdio.h>

void main()
{       
    int i,n,sum=0;
	float avg;
	printf("Input the 10 numbers : \n");
    fflush(stdout);
	for (i=1;i<=10;i++)
	{
        printf("Number-%d :",i);
		fflush(stdout);
		scanf("%d",&n);
		sum +=n;
	}
	avg=sum/10.0;
	printf("\nThe sum of 10 no is : %d\nThe Average is : %f",sum,avg);
 
}