package CodeStock.Array_Functions.Prefix_Sum;

import java.util.*;

public class prefix_sum {

    public static List<Integer> generatePrefixSum(int[] array, int start, int end) {
        if (start < 1 || end > array.length || start > end) {
            System.out.println("Invalid range for array. Please check the start and end indices.");
            return Collections.emptyList();
        }

        List<Integer> prefixSum = new ArrayList<>();
        prefixSum.add(0);

        int currentSum = 0;

        for (int i = start; i <= end; i++) {
            currentSum += array[i - 1];
            prefixSum.add(currentSum);
        }

        return prefixSum;
    }

    public static List<Integer> generatePrefixSum(List<Integer> list, int start, int end) {
        if (start < 1 || end > list.size() || start > end) {
            System.out.println("Invalid range for list. Please check the start and end indices.");
            return Collections.emptyList();
        }

        List<Integer> prefixSum = new ArrayList<>();
        prefixSum.add(0);

        int currentSum = 0;

        for (int i = start; i <= end; i++) {
            currentSum += list.get(i - 1);
            prefixSum.add(currentSum);
        }

        return prefixSum;
    }

    public static void main(String[] args) {
        //example as array
        int[] a = {1, 2, 3, 4, 5};
        int startIndex = 1;
        int endIndex = 4;

        List<Integer> prefixSumArray = generatePrefixSum(a, startIndex, endIndex);

        if (!prefixSumArray.isEmpty()) {
            System.out.print("Prefix Sum for array subrange: ");
            for (int sum : prefixSumArray) {
                System.out.print(sum + " ");
            }
            System.out.println();
        }
        //example as list
        List<Integer> list = Arrays.asList(1, 2, 3, 4, 5);
        startIndex = 1;
        endIndex = 4;

        List<Integer> prefixSumList = generatePrefixSum(list, startIndex, endIndex);

        if (!prefixSumList.isEmpty()) {
            System.out.print("Prefix Sum for list subrange: ");
            for (int sum : prefixSumList) {
                System.out.print(sum + " ");
            }
            System.out.println();
        }
    }
}
