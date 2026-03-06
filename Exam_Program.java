/* Julian Gonzalez
 * Program Exam 1
 * CSC 321
 * */
import java.util.Scanner;

public class NumberGuessingGame {

	public static void main(String[] args){
		Scanner scanner = new Scanner(System.in);

		System.out.println("Welcome to the Number Guessing Game! Your job is to guess a number that I could be thinking of between the ranges of 10-20");
		System.out.println("If you successfully guess the number you win. However if you guess incorrectly you lose");
		System.out.println("Good Luck!");
		System.out.print("Enter Your Number: ");
		int userInput = scanner.nextInt();

		if (userInput == 12) {
			System.out.println("Congratulations! You Win!");
		} else {
			System.out.println("You Lost! My number was 12. Feel free to Try again!");
		}
	scanner.close();
	}
}

