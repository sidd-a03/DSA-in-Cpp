# Contains Duplicate

[LeetCode Link](https://leetcode.com/problems/contains-duplicate/)

**Difficulty:** Easy

## Problem Statement
Given an integer array `nums`, return `true` if any value appears **at least twice** in the array, and return `false` if every element is distinct.

## Examples
**Example 1:**
**Input:** `nums = [1, 2, 3, 1]`  
**Output:** `true`

**Example 2:**
**Input:** `nums = [1, 2, 3, 4]`  
**Output:** `false`

## Intuition & Approach
There are a two primary ways to approach this problem, trading off between time and space complexity:

1. **Hash Set (Optimal Time):** As we iterate through the array, we can insert each element into a Hash Set (like `std::unordered_set` in C++). Before inserting, we check if the element already exists in the set. If it does, we found a duplicate and return `true`. If we finish the loop without any matches, we return `false`.
2. **Sorting (Optimal Space):** Sort the array first. Once sorted, any duplicate numbers will be immediately adjacent to each other. We can simply iterate through the array and check if `nums[i] == nums[i+1]`.

## Complexity Analysis

**Hash Set Approach:**
* **Time Complexity:** $O(n)$ where $n$ is the number of elements in the array. Inserting and searching in a Hash Set takes $O(1)$ time on average, and we do this for at most $n$ elements.
* **Space Complexity:** $O(n)$. In the worst-case scenario (no duplicates), the Hash Set will store all $n$ elements from the array.

**Sorting Approach:**
* **Time Complexity:** $O(n \log n)$ due to the time it takes to sort the array. The subsequent iteration takes $O(n)$ time.
* **Space Complexity:** $O(1)$ or $O(n)$ depending on the specific sorting algorithm implemented under the hood by your programming language.