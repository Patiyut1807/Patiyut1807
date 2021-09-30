import java.util.Arrays;

public class hello {
    public static void main(String[] args) {
        int[] number = {3, 2, 9, 5, 8, 10, 1};

        System.out.println("Array: " + Arrays.toString(number));
        System.out.println("Sorted: " + Arrays.toString(sort(number)));
    }

    public static int[] sort (int[] arr) {
        int length = arr.length;
        for (int i = 0; i < length - 1; i++) {
            for (int j = 1; j < length - i; j++) {
                if (arr[j - 1] > arr[j]) {
                    int temp = arr[j - 1];
                    arr[j - 1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        return arr;
    }
}