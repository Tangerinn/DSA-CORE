import java.util.Scanner;
import java.util.Random;

class Main {
    public static void main(String[] args) {
        String[] choices = { "rock", "paper", "scissors" };

        System.out.print("Enter your move (rock, paper, scissors) : ");
        Scanner input = new Scanner(System.in);
        String playerChoice = input.nextLine().toLowerCase();

        if (!playerChoice.equals("rock") && !playerChoice.equals("paper") && !playerChoice.equals("scissors")) {
            System.out.println("INVALID CHOICE.");
            return;
        }

        Random random = new Random();
        String computerChoice = choices[random.nextInt(3)];
        System.out.println("Computer's choice : " + computerChoice);

        if (playerChoice.equals(computerChoice)) {
            System.out.println("TIE!");
        } else if (playerChoice.equals("rock") && computerChoice.equals("scissors") ||
                playerChoice.equals("paper") && computerChoice.equals("rock") ||
                playerChoice.equals("scissors") && computerChoice.equals("paper")) {
            System.out.println("YOU WIN :D ");
        } else {
            System.out.println("YOU LOSE :( ");
        }

    }

}
