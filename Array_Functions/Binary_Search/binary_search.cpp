//Implementatiom of Binary Search Algorithm in C++
#include <bits/stdc++.h>
using namespace std;

int bsearch(double arr[], int n, double x)
{
    int mid, low = 0, high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] == x)
            return mid;
        else
            low = mid + 1;
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of dataset: ";
    cin >> n;
    // Sample input: n=7

    double arr[n];
    cout << "Enter the " << n << " numbers one by one." << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // Sample input: arr={1.25,1.256,24,42.36,65,420.420,6969.69}

    double x;
    cout << "Enter the number to be searched for: ";
    cin >> x;
    // Sample input: x=65

    int index = bsearch(arr, n, x);
    // After calling bsearch function, index=4

    sort(arr, arr + n); 
    //For large dataset, it is not feasible to enter the numbers in sorted order
    
    if (index != -1)
        cout << "The number " << x << " is found at index: " << index; // Prints 4
    else
        cout << "The number " << x << " is not found in the dataset!";

    return 0;
}
