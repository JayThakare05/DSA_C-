// Given a string s, find the length of the longest substring without duplicate characters.

 

// Example 1:

// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3.
// Example 2:

// Input: s = "bbbbb"
// Output: 1
// Explanation: The answer is "b", with the length of 1.
// Example 3:

// Input: s = "pwwkew"
// Output: 3
// Explanation: The answer is "wke", with the length of 3.
// Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> lastIndex; // stores last index of each char
        int left = 0, maxLen = 0;

        for (int right = 0; right < s.size(); right++) {
            char ch = s[right];

            // if char seen before and inside current window, move left pointer
            if (lastIndex.find(ch) != lastIndex.end() && lastIndex[ch] >= left) {
                left = lastIndex[ch] + 1;
            }

            // update last seen index of current char
            lastIndex[ch] = right;

            // update max length
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    
    }
};