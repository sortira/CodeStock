# Prefix Sum Algorithm

## Overview
The Prefix Sum algorithm computes the cumulative sum of elements in an array or list. This cumulative sum is also known as the "partial sum". It is often used in problems where you need to quickly calculate the sum of elements in a range or subarray.

## Example:
Given an array:

arr = [1, 2, 3, 4, 5]

The Prefix Sum array will store the cumulative sums up to each index:

prefix_sum = [0, 1, 3, 6, 10, 15]

Where:
- prefix_sum[0] = 0 (Initial value for easy range sum calculations)
- prefix_sum[i] = arr[0] + arr[1] + ... + arr[i-1]

## Visual Breakdown:

1. **Input Array:**

arr = [1, 2, 3, 4, 5]

2. **Prefix Sum Calculation:**
    - prefix_sum[0] = 0 (initialized to 0)
    - prefix_sum[1] = prefix_sum[0] + arr[0] = 0 + 1 = 1
    - prefix_sum[2] = prefix_sum[1] + arr[1] = 1 + 2 = 3
    - prefix_sum[3] = prefix_sum[2] + arr[2] = 3 + 3 = 6
    - prefix_sum[4] = prefix_sum[3] + arr[3] = 6 + 4 = 10
    - prefix_sum[5] = prefix_sum[4] + arr[4] = 10 + 5 = 15

3. **Resulting Prefix Sum Array:**

prefix_sum = [0, 1, 3, 6, 10, 15]
