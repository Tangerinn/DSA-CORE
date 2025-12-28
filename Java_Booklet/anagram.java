import java.util.Scanner;

class Anagram {
    // method : inputs a string as an array of characters.
    static char[] inputString() {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter a string : ");
        String string = input.next();
        char[] arr = new char[string.length()];
        for (int i = 0; i <= string.length() - 1; i++) {
            arr[i] = string.charAt(i);
        }
        return arr;
    }

    // method : prints string.
    static void printArray(char[] arr) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]);
        }
    }

    // method : checks if two strings are anagrams of each other.
    static void checkIfAnagram(char[] string1, char[] string2) {
        // solution : ex.or all the elemets. done. if answer is zero, theyre anagrams.
        // if not, theyre not.
        int sum = 0;
        if (string1.length != string2.length) {
            System.out.println("Entered strings are not anagrams.");
            return;
        } else {
            for (int i = 0; i <= string1.length - 1; i++) {
                sum = sum ^ string1[i] ^ string2[i];
            }
        }
        if (sum == 0) {
            System.out.println("Entered string are anagrams.");
        } else {
            System.out.println("Entered string are not anagrams.");

        }

    }

    public static void main(String[] args) {
        char[] string1 = inputString();
        char[] string2 = inputString();
        checkIfAnagram(string1, string2);

    }

}
