#include <stdio.h>
#include <math.h>

float r; /*the raduis of the sphere*/
float V; /*the volume of the sphere*/
char line_text[50]; /*input line*/
//const float PI = 3.14159265358979323846264338327950288419716939937510; /*π*/

int main()
{
    printf("Input the radius of the sphere : ");
	fflush(stdout);
	fgets(line_text, sizeof(line_text), stdin);
    sscanf(line_text, "%f", &r);

    V =  (4.0 / 3.0) * M_PI * pow(r,3);

    printf("The volume of sphere is %f",V);
	fflush(stdout);
    return 0;
}
