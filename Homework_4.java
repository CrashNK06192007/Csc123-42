/* Julian Gonzalez
 * CSC 321 
 * 2/3/2026
 * */

import java.util.Scanner;

public class Homework_4
{
	public static void main(String[]args)
	{
		Scanner input = new Scanner(System.in);

		
		System.out.print("Please select a number (1-4) for tips of staying on top of College: ");
 		
		int inputUser = input.nextInt();
		
		if (inputUser == 1) 
		{
			System.out.println("Attend all your Lectures! Never ever miss any new information");
		}
		else if (inputUser == 2){
			 System.out.println("Have a balanced schedule to dedicate time for School / Work / and YOU time.");
		}
		else if (inputUser == 3)
		{
			System.out.println("Discover your method of studying effectively to easily pass Exams");
		}
		else if (inputUser == 4)
		{
			System.out.println("Engage conversation with your peers or even your professor!");
		}
		else
		{
			System.out.println("Invalid Choice.");
		}
	}
}
