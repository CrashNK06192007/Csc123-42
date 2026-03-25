//
import java.util.Scanner;

public class jGonzalez10{
	public static void main(String[] args)
	{
		double radius = 0;
		double height = 0;

		Scanner input = new Scanner(System.in);

		System.out.println("Please enter radius of a cylinder: ");
		radius = input.nextDouble();

		System.out.println("Please enter height of a cylinder: ");
		height = input.nextDouble();

		double volume = calculateVolume(radius, height);
		System.out.println("The Volume of the cylinder is: " + volume);

	
	}
	public static double calculateVolume(double radius, double height){
		double volume = Math.PI * height * radius * radius;
		return volume;
	}
}
