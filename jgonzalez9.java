import java.util.Random;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Random rand = new Random();
        Scanner scanner = new Scanner(System.in);

        int answer = rand.nextInt(20);
        int guess = 0;

        while (guess != answer) {
            System.out.print("Guess a number between 0-20: ");
            if (scanner.hasNextInt()) {
                guess = scanner.nextInt();

                if (guess < answer) {
                    System.out.println("Too Low! Try Again!");
                } else if (guess > answer) {
                    System.out.println("Too High! Try Again!");
                } else if (guess == answer)
		{
		    System.out.println("Congratulations, You've gussed my Number which was " + answer + " Nice Job!");
		}
            } else {
                System.out.println("Please enter a Valid Number!");
                scanner.next();
            }
        }
	scanner.close();
    }
}
