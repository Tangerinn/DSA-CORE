import java.util.Scanner;

class Demo {
    static void linearSearch(String name, char target) {
        for (int i = 0; i < name.length(); i++) {
            if (target == name.charAt(i)) {
                System.out.println(target + " exists at " + (i + 1) + "th character in " + name);
                return;

            }

        }
        System.out.println(target + " does not exist in " + name);
    }

    static void searchIn2dArray(int[][] arr, int target) {
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                if (target == arr[i][j]) {
                    System.out.println("FOUND! AT " + i + ", " + j);
                    return;
                }
            }
        }
        System.out.println("NOT FOUND :(");
    }

    public static void main(String[] args) {

        int[][] arr = {
                { 1, 2, 3 },
                { 2, 6, 106 },
                { 11, 12, 13, 15 }
        };
        System.out.print("Enter a target element : ");
        Scanner input = new Scanner(System.in);
        int target = input.nextInt();
        searchIn2dArray(arr, target);
    }
}
