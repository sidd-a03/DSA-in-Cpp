# Longest Common Prefix

[LeetCode Link](https://leetcode.com/problems/longest-common-prefix/)

**Difficulty:** Easy

## Problem Statement
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string `""`.

## Examples
**Example 1:**
**Input:** `strs = ["flower", "flow", "flight"]`  
**Output:** `"fl"`  
**Explanation:** All three strings start with the letters "fl".

**Example 2:**
**Input:** `strs = ["dog", "racecar", "car"]`  
**Output:** `""`  
**Explanation:** There is no common prefix among the input strings.

## Intuition & Approach
There are two highly effective ways to solve this. The first is more literal, and the second uses a clever trick.

**Approach 1: Vertical Scanning (The Intuitive Way)**
Imagine lining the strings up on top of each other. You can take the first character of the very first string, and check if every other string has that exact same character at that exact same index. 
1. Loop through the characters of the first string.
2. Inside that loop, loop through the rest of the strings.
3. If a character doesn't match, or if you reach the end of one of the shorter strings, you immediately stop and return the prefix you've built so far.

**Approach 2: Sorting (The Elegant Trick)**
If you sort an array of strings alphabetically, the strings that share the most characters will be grouped together, and the strings that are the *most different* from each other will end up at the very beginning and the very end of the array.
1. Sort the `strs` array alphabetically.
2. Grab the first string and the last string in the sorted array.
3. Compare only these two strings character by character. Since they are the most different strings in the whole array, their common prefix is guaranteed to be the common prefix for the entire array!

## Complexity Analysis

**Sorting Approach:**
* **Time Complexity:** $O(N \log N \times M)$ where $N$ is the number of strings and $M$ is the maximum length of a string. Sorting strings takes slightly longer than sorting integers because the characters must be compared.
* **Space Complexity:** $O(1)$ or $O(N)$ depending on the specific sorting algorithm implemented by your programming language under the hood.

**Vertical Scanning Approach:**
* **Time Complexity:** $O(S)$ where $S$ is the sum of all characters in all strings. In the worst case, all strings are identical. The best case is $O(N \times \text{min\_len})$ where we only check up to the length of the shortest string.
* **Space Complexity:** $O(1)$. We only use a few variables to keep track of our indices.