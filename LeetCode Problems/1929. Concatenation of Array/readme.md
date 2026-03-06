# Concatenation of Array

[LeetCode Link](https://leetcode.com/problems/concatenation-of-array/)

**Difficulty:** Easy

## Problem Statement
Given an integer array `nums` of length `n`, you want to create an array `ans` of length `2n` where `ans[i] == nums[i]` and `ans[i + n] == nums[i]` for `0 <= i < n` (0-indexed).

Specifically, `ans` is the concatenation of two `nums` arrays. Return the array `ans`.

## Example
**Input:** `nums = [1, 2, 1]`  
**Output:** `[1, 2, 1, 1, 2, 1]`

**Explanation:**
The array `ans` is formed as follows:
* `ans = [nums[0], nums[1], nums[2], nums[0], nums[1], nums[2]]`
* `ans = [1, 2, 1, 1, 2, 1]`

## Intuition & Approach
The goal is simply to duplicate the given array sequentially. Since we know the output array will be exactly twice the size of the input array, we can approach this in a few ways depending on the language:

1. **Pre-allocation:** Create an empty result array of size `2 * n`. Loop through the original array once (from index `0` to `n-1`), and simultaneously assign the current element to `ans[i]` and `ans[i + n]`.
2. **Built-in Functions:** Many modern languages have built-in array concatenation methods (like the `+` operator in Python, or `.insert()`/`.append()` in C++) that can handle this natively without requiring a manual loop.

## Complexity Analysis
* **Time Complexity:** `O(n)` where `n` is the length of the input array `nums`. We must visit each element to copy it into the new array.
* **Space Complexity:** `O(n)`. The output array requires `2n` space, which scales linearly with the input size. *(Note: If the output array is excluded from the space complexity calculation, it would be considered `O(1)` auxiliary space).*