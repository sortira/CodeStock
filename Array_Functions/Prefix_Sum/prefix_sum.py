def generate_prefix_sum(iterable, start, end):
    if start < 1 or end > len(iterable) or start > end:
        print("Invalid range. Please ensure the range is within bounds and start <= end.")
        return []

    prefix_sum = [0]
    current_sum = 0
    for i in range(start - 1, end):  # Adjusting for 1-based indexing
        current_sum += iterable[i]
        prefix_sum.append(current_sum)
    
    return prefix_sum

if __name__ == "__main__":
    # Example with a list 
    a = [1, 2, 3, 4, 5]
    start_index = 2
    end_index = 4
    
    prefix_sum_a = generate_prefix_sum(a, start_index, end_index)
    if prefix_sum_a:  # Check if the range is valid and prefix sum is not empty
        print("Prefix Sum for range (array):", " ".join(map(str, prefix_sum_a)))
    
  