import java.util.Scanner;
public class jgonzalez{
	public static void main(String[] args){
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
		
		total = x+y*x/y-x;
		dtotal = c+v*c/v-c;
		
		total_1 = -a-b/a*b+a;
		dtotal_1 = -e-f/e*f+e;
		
		total_2 = m+n-m/n;
		dtotal_2 = o+p-o/p;
		
		/*
		Arithmetic Functions
		Function 1 Already Used : x+y*x/y-x
		Function 2 : -x-y/x*y+x
		Function 3: x+y-x/y
		*/
		
		System.out.printf("int total = %d \n" ,total);
		System.out.printf("double total = %f \n" ,dtotal);
		System.out.println();
		System.out.printf("int total = %d \n" ,total_1);
		System.out.printf("double total = %f \n" ,dtotal_1);
		System.out.println();
		System.out.printf("int total = %d \n" ,total_2);
		System.out.printf("double total = %f \n" ,dtotal_2);
	}
}

