import java.util.*;

public class Bubblesort {
    static void bubbleSort(int[] arr) {
        long startTime = System.nanoTime();
        System.out.println("starting time : "+startTime);
        
        int n = arr.length;
        int temp = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < (n - i); j++) {
                if (arr[j - 1] > arr[j]) {
                    // swap elements
                    temp = arr[j - 1];
                    arr[j - 1] = arr[j];
                    arr[j] = temp;
                }

            }
        }
        long endTime = System.nanoTime();
        System.out.println("ending time : "+endTime);
        long totalTime = endTime - startTime;
        System.out.println("Total time complexity in millisec : "+totalTime);
        System.out.println("Total time complexity in seconds : "+totalTime/1000d);
        

    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter num of total elements");
        int n = sc.nextInt();

        int[] array = new int[n];
        System.out.println("Enter the elements of the array: ");
        for (int i = 0; i < n; i++) {

            array[i] = sc.nextInt();
        }
        System.out.println("Array elements are: ");

        for (int i = 0; i < n; i++) {
            System.out.print(array[i] + " ");
        }
        System.out.println();

        bubbleSort(array);// sorting array elements using bubble sort
        System.out.println();

        System.out.println("Array After Bubble Sort");
        for (int i = 0; i < array.length; i++) {
            System.out.print(array[i] + " ");
        }

        sc.close();
    }
}