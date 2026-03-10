# Group Anagrams

[LeetCode Link](https://leetcode.com/problems/group-anagrams/)

**Difficulty:** Medium

## Problem Statement
Given an array of strings `strs`, group the **anagrams** together. You can return the answer in **any order**.

An **Anagram** is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

## Examples
**Example 1:**
**Input:** `strs = ["eat","tea","tan","ate","nat","bat"]`  
**Output:** `[["bat"],["nat","tan"],["ate","eat","tea"]]`

**Example 2:**
**Input:** `strs = [""]`  
**Output:** `[[""]]`

**Example 3:**
**Input:** `strs = ["a"]`  
**Output:** `[["a"]]`

## Intuition & Approach
The core realization here is that if two words are anagrams of each other, sorting their letters alphabetically will result in the exact same string. We can use this sorted version as a universal "key" to group all matching words together.

**Steps:**
1. **Initialize a Hash Map:** Create a Hash Map where the *Key* is a string (the sorted version of the word) and the *Value* is a list of strings (all the original words that match that sorted version).
    * *C++ Syntax:* `std::unordered_map<std::string, std::vector<std::string>>`
2. **Iterate Through the Words:** Loop through each original string in the input array.
3. **Sort to Find the Key:** Create a copy of the current string and sort it alphabetically. 
4. **Group in the Map:** Use the sorted string as the key, and append the *original* string to the list associated with that key in your Hash Map.
5. **Format the Output:** Once the loop is done, iterate through the values in the Hash Map and push each list of grouped anagrams into a final result array to return.

## Complexity Analysis
* **Time Complexity:** $O(N \times K \log K)$ where $N$ is the number of strings in the array, and $K$ is the maximum length of a string. We iterate through $N$ strings, and for each string, we sort it, which takes $O(K \log K)$ time.
* **Space Complexity:** $O(N \times K)$ to store all the strings grouped together inside the Hash Map.