import java.util.Scanner;

class Palindrome {
    static String inputString() {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter a string: ");
        String string = input.next();
        return string;
    }

    static String reverseString(String originalStr) {
        String reversedStr = "";
        for (int i = 0; i <= originalStr.length() - 1; i++) {
            reversedStr = originalStr.charAt(i) + reversedStr;
        }
        return reversedStr;
    }

    public static void main(String[] args) {
        String string1 = inputString();
        System.out.println(reverseString(string1));

        if (string1.equals(reverseString(string1))) 
        {
            System.out.println("Entered string is a palindrome.");
        } else {
            System.out.println("Entered string is a not palindrome.");
        }

    }
}
