/*Julian Gonzalez 
 * Lab_11
 * CSC_321
 * April_4th_2026
 * */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double hypotTriangle(double b, double h)
{
	double hypotenuse = sqrt(b*b + h*h);
	return hypotenuse;
}

int main(){
	double b = 0.0;
	double h = 0.0;
	double result = 0.0;

	printf("Please enter the base of the Triangle: \n");
	scanf("%lf", &b);

	printf("Please enter the height of the Triangle: \n");
	scanf("%lf", &h);

	result = hypotTriangle(b,h);
	printf("The hypotenuse of the right triangle is: %f\n", result);

	return EXIT_SUCCESS;
}
