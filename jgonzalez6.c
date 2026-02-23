/* Julian Gonzalez
 * Assignment #6
 * */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x = 5;
    int y = 6;
    double c = 5.0;
    double v = 6.0;

    int a = 5;
    int b = 6;
    double e = 5.0;
    double f = 6.0;

    int m = 5;
    int n = 6;

    double o = 5.0;
    double p = 6.0;

    int total = 0;
    double dtotal = 0;

    int total_1 = 0;
    double dtotal_1 = 0;

    int total_2 = 0;
    double dtotal_2 = 0;

    total = x + y * x / y - x;
    dtotal = c + v * c / v - c;

    total_1 = -a - b / a * b + a;
    dtotal_1 = -e - f / e * f + e;

    total_2 = m + n - m / n;
    dtotal_2 = o + p - o / p;

    /*
    Arithmetic Functions
    Function 1 Already Used : x+y*x/y-x
    Function 2 : -x-y/x*y+x
    Function 3: x+y-x/y
    */

    printf("int total = %d \n", total);
    printf("double total = %f \n", dtotal);
    printf("\n");
    printf("int total = %d \n", total_1);
    printf("double total = %f \n", dtotal_1);
    printf("\n");
    printf("int total = %d \n", total_2);
    printf("double total = %f \n", dtotal_2);

    return 0;
}
