from typing import List

def kadanes_algorithm(nums: List[int]) -> int:
    """
    Find the maximum subarray sum using Kadane's Algorithm.

    Args:
        nums (List[int]): List of integers.

    Returns:
        int: Maximum subarray sum.

    Examples:
        >>> kadanes_algorithm([5, 4, -1, 2, 6, -9])
        16
    """
    max_sum = float('-inf')
    current_sum = 0

    for num in nums:
        current_sum = max(num, current_sum + num)
        max_sum = max(max_sum, current_sum)

    return max_sum

if __name__ == "__main__":
    try:
        input_str = input("Enter a list of integers separated by spaces: ")
        nums = list(map(int, input_str.split()))
        max_subarray_sum = kadanes_algorithm(nums)
        print("Maximum subarray sum:", max_subarray_sum)
    except ValueError:
        print("Invalid input. Please enter a list of integers separated by spaces.")
