Binary Search is a highly efficient algorithm to search for an element in a **sorted** array.

Time Complexity: While linear search takes O(N), Binary search takes O(log N).

                 At each iteration, the part of the array under consideration is reduced by halved.
								 
                 We stop the loop when either:  1. The number is found, or 
								 
                                                2. When only one element is left (the last element either will be the required number
																								
	                                              or we can say that the required number is not present).
																								
                 For an array of N elements, let x be the number of times the loop runs i.e. effectively the time complexity.
                 Considering the worst case, we will not find the required number until we reach the last element.
                 Therfore N / (2^x) = 1
                 =>   N = 2^x
                 =>   log N = x  (Base 2)
                 =>   The time complexity thus comes out to be log N.
                 
Space Complexity: It takes no extra space, i.e. O(1)

Execution: Striver- https://www.youtube.com/watch?v=MHf6awe89xw
