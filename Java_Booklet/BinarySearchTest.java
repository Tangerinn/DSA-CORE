import org.junit.Test;
import static org.junit.Assert.assertEquals;

public class BinarySearchTest {
    @Test
    public void testTargetFound() {
        int[] arr = {1, 2, 3, 4, 5, 6, 7};
        assertEquals(2, BinarySearch.binarySearch(arr, 3));
    }

    @Test
    public void testTargetNotFound() {
        int[] arr = {1, 2, 3, 4, 5, 6, 7};
        assertEquals(-1, BinarySearch.binarySearch(arr, 8));
    }

    @Test
    public void testEmptyArray() {
        int[] arr = {};
        assertEquals(-1, BinarySearch.binarySearch(arr, 5));
    }

    @Test
    public void testSingleElementArray() {
        int[] arr = {10};
        assertEquals(0, BinarySearch.binarySearch(arr, 10));
    }
}
