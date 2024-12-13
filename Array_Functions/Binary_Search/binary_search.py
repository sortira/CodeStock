# Implementation of Binary Search Algorithm in Python
from typing import List

def bsearch(arr: List[float], x: float) -> int:
    low, high = 0, len(arr) - 1
    while low <= high:
        mid = (low + high) // 2
        if arr[mid] > x:
            high = mid - 1
        elif arr[mid] == x:
            return mid
        else:
            low = mid + 1
    return -1

def main():
    n = int(input("Enter the size of dataset: "))
    # Sample input: n=7

    arr = []
    print(f"Enter the {n} numbers one by one.")
    for _ in range(n):
        arr.append(float(input()))
    # Sample input: arr=[1.25, 1.256, 24, 42.36, 65, 420.420, 6969.69]

    x = float(input("Enter the number to be searched for: "))
    # Sample input: x=65

    arr.sort()
    # For large dataset, it is not feasible to enter the numbers in sorted order

    index = bsearch(arr, x)
    # After calling bsearch function, index=4

    if index != -1:
        print(f"The number {x} is found at index: {index}")  # Prints 4
    else:
        print(f"The number {x} is not found in the dataset!")

if __name__ == "__main__":
    main()

