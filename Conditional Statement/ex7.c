#include <stdio.h>

int main()
{
int r,l,w,b,h;
char choice;
float area;
      printf("Input 1 for area of circle\n");
      printf("Input 2 for area of rectangle\n");
      printf("Input 3 for area of triangle\n");
      printf("Input your choice : ");
      fflush(stdout);
      scanf("%c",&choice);
      switch(choice)
      {
           case 'C':
                 printf("Input radious of the circle : ");
                 fflush(stdout);
                 scanf("%d",&r);
                 area=3.14*r*r;
                 break;
            case 'R':
                  printf("Input length and width of the rectangle : ");
                  fflush(stdout);
                  scanf("%d%d",&l,&w);
                  area=l*w;
                  break;
            case 'T':
                  printf("Input the base and hight of the triangle :");
                  fflush(stdout);
                  scanf("%d%d",&b,&h);
                  area=.5*b*h;
                  break;
          }
    printf("The area is : %f\n",area);
    return 0;
}