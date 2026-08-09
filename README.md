# LeetCode Solutions

My practice solutions for LeetCode problems, solved in C++ as part of my DSA practice.

## Approach Notes

### 1. Two Sum
Given an array and a target, find indices of two numbers that add up to the target.

**Approach:** Brute force — used two nested loops. Outer loop fixes one number, inner loop checks every number after it to see if the pair sums to the target. Once found, both indices are pushed into the result vector and the loop breaks.

- Time Complexity: O(n²)
- Space Complexity: O(1) (excluding output)

### 2. Add Two Numbers
Two numbers are represented as linked lists in reverse order (each node holds a single digit). Add the two numbers and return the sum as a linked list, also in reverse order.

**Approach:** Initially tried converting each linked list into a full integer, adding them, then converting back — this worked for small inputs but caused an integer overflow for large numbers (10+ digits), since a single `int`/`long long` can't hold arbitrarily large numbers.

Switched to the correct approach: traverse both lists simultaneously, digit by digit (like manual column addition). At each step:
- Add the current digits of both lists plus any carry from the previous step
- The units digit (`sum % 10`) becomes the next node's value
- The remaining value (`sum / 10`) becomes the carry for the next step
- Continue until both lists are exhausted **and** there's no carry left (handles cases like `9999 + 1`)

- Time Complexity: O(max(n, m)) where n, m are the lengths of the two lists
- Space Complexity: O(max(n, m)) for the result list


### 9. Palindrome number
**Approach:** I first convert integer into string then used *Two pointer* approach setting low pointer at the zeroth index and high pointer at the last index.


### 14. Longest Common Prefix
**Approach:** Iterate through each character position of the first string and compare it with the corresponding character in all other strings. Stop at the first mismatch and return the common prefix built so far.

### 21. Merge Two Sorted Lists
**Approach:** Used a dummy node (`finalList`) to build the resulting merged list, with a separate `finalHead` pointer that moves forward as nodes are added, this avoids losing the head reference.
Created two pointers, `head1` and `head2`, to traverse `list1` and `list2` respectively. At each step, compared the current values of `head1` and `head2` and copied the smaller value into `finalList`, advancing the corresponding pointer. Handled the case where both values are equal by copying both.
Once one list is fully traversed, the remaining nodes of the other list (if any) are appended directly using two separate `while` loops, since they're already sorted.
Finally, returned `finalList`, which holds the head of the merged sorted list.
- **Time Complexity:** O(n + m) where n, m are the lengths of the two lists
- **Space Complexity:** O(1) additional space (excluding the output list)

### 1929. Concatenation of Array
**Approach:** Consider the resulting array in to two parts. Copy the given array as it is in first half and meanwhile placing the same elements at (i+n)th index of the resulting array 


### 2149. Rearrange Array Elements by Sign
**Approach:** Used two pointer approach. Initialized a vector<int>res of the size of vector<int>nums. Set pointer i to 0 and pointer j to 1. If nums[k]th index is positive, copied it to res[i]th index and set i=i+2 else if nums[k]th index is negative, copied it to res[j]th index and set j=j+2;


### 520. Detect Capital 
**Approach:** Checks if a word's capitalization is correct: either all letters uppercase, all lowercase, or only the first letter capitalized. Solved using three helper functions (all_small, all_capital, first_capital) that each validate one pattern, combined with OR logic in detectCapitalUse.

### 977. Squares Of A Sorted Array 
**Approach:** Squares each number in the sorted array, then sorts the squared values to get the final non-decreasing result.

## Folder Structure
Each folder is named `<number>-<problem-name>` and contains a `solution.cpp` file with my accepted LeetCode solution.
