import java.util.ArrayList;
import java.util.Scanner;

class Main {
    // method: input's array
    static ArrayList<Integer> inputArray() {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter array size: ");
        int n = input.nextInt();

        System.out.println("Enter array: ");
        ArrayList<Integer> arr = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            arr.add(input.nextInt());
        }
        return arr;
    }

    // method: print's array
    static void printArray(ArrayList<Integer> arr) {
        for (int i = 0; i < arr.size(); i++) {
            System.out.print(arr.get(i) + " ");
        }
    }

    static ArrayList<Integer> sum(ArrayList<Integer> arr1, ArrayList<Integer> arr2) {
        int n = Math.max(arr1.size(), arr2.size());
        ArrayList<Integer> sum = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            int val1 = (i < arr1.size()) ? arr1.get(i) : 0;
            int val2 = (i < arr2.size()) ? arr2.get(i) : 0;
            sum.add(val1 + val2);
        }
        return sum;
    }

    public static void main(String[] args) {
        ArrayList<Integer> arr1 = inputArray();
        ArrayList<Integer> arr2 = inputArray();
        ArrayList<Integer> sum = sum(arr1, arr2);
        System.out.print("Summation array: ");
        printArray(sum);
    }
}
