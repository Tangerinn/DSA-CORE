import java.util.Scanner;

class Demo {
    static void searchRange(int[] nums, int target) {
        int start = 0;
        int first = -1, last = -1;
        int end = nums.length - 1;

        while (start <= end) { // ✅ FIXED: Changed `start < end` to `start <= end` to ensure last element is checked.
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                int i = 0, j = 0;

                // ✅ FIXED: Added `mid - i >= 0` check to prevent accessing negative indices.
                while (mid - i >= 0 && nums[mid - i] == target) {
                    first = mid - i;
                    i++;
                }

                // ✅ FIXED: Added `mid + j < nums.length` check to prevent accessing beyond last index.
                while (mid + j < nums.length && nums[mid + j] == target) {
                    last = mid + j;
                    j++;
                }

                System.out.println("Range is: " + first + ", " + last);
                return;
            }

            // ✅ FIXED: Correctly updating `end = mid - 1` instead of `end = mid` to avoid infinite loops.
            else if (nums[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        // If target is not found, it returns (-1, -1)
        System.out.println("Range is: " + first + ", " + last);
    }

    public static void main(String[] args) {
        int arr[] = {1, 1, 2, 9, 9, 9, 10, 11, 11, 11, 12};
        searchRange(arr, 12);
    }
}
