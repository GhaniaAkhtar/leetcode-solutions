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
**Approach: ** Iterate through each character position of the first string and compare it with the corresponding character in all other strings. Stop at the first mismatch and return the common prefix built so far.

## Folder Structure
Each folder is named `<number>-<problem-name>` and contains a `solution.cpp` file with my accepted LeetCode solution.
