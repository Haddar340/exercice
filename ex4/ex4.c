#include <stdio.h>


int a,b; /*accept 2 interger*/

int main()
{
    printf("enter nbr 1:");
    fflush(stdout);
    scanf("%d",&a);
    printf("enter nbr 2:");
    fflush(stdout);
    scanf("%d",&b);
    if (a == b)
    printf("the 2 numbers %d & %d are equals",a,b);
    else
    printf("They are not");
    return 0;
}