import java.util.*;
class CodeStock
{
    int bsearch(double[] arr, int n, double x) 
      {
        int mid, low = 0, high = n - 1;
        while (low <= high) 
        {
            mid = low + (high - low) / 2;
            if (arr[mid] > x)
                high = mid - 1;
            else if (arr[mid] == x)
                return mid;
            else
                low = mid + 1;
        }
        return -1;
    }
    public static void main(String[] args)
    {
        CodeStock obj= new CodeStock();
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of dataset: ");
        int n = sc.nextInt();
        // Sample input: n=7

        double[] arr= new double[n];
        System.out.println("Enter the " + n + " numbers one by one.");
        for (int i = 0; i < n; i++)
            arr[i] = sc.nextDouble();
        // Sample input: arr={1.25,1.256,24,42.36,65,420.420,6969.69}

        System.out.print("Enter the number to be searched for: ");
        double x = sc.nextDouble();
        // Sample input: x=65
        
        Arrays.sort(arr);
        // For large dataset, it is not feasible to enter the numbers in sorted order
        
        int index = obj.bsearch(arr, n, x);
        // After calling bsearch function, index=4

        if (index != -1)
            System.out.println("The number " + x + " is found at index: " + index); // Prints 4
        else
            System.out.println("The number " + x + " is not found in the dataset!");

    }
}
