// Julian Gonzalez Balsells
// Assingment 5
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
        int a = 10;
        float b = 9.5;
        double c = 8.25;
        char d = 'D';
        
		int i;
        int x[10] = {20,21,22,23,24,25,26,27,28,29};

        printf("Variable A = %d, address = %p\n", a, &a);
        printf("Variable B = %f, address = %p\n", b, &b);
        printf("Variable C = %lf, address = %p\n", c, &c);
        printf("Variable D = %c, address = %p\n", d, &d);

        if (a < 5)
        {               
			// int z = 15; // Potential Error Right Here!
			// printf("Inside if: z = %d, address = %p\n", z, &z);
        }
        //printf("Variable Z = %d\n",z);
        for (i = 0; i < 10; i++)
        {
                printf("x[%d] = %d, address = %p\n", i, x[i], &x[i]);


        }
		return EXIT_SUCCESS;
}

