// Given a string s consisting of words and spaces, return the length of the last word in the string.
// A word is a maximal substring consisting of non-space characters only.

// Example 1:

// Input: s = "Hello World"
// Output: 5
// Explanation: The last word is "World" with length 5.

// Constraints:
// 1 <= s.length <= 104
// s consists of only English letters and spaces ' '.
// There will be at least one word in s.

class Solution {
public:
    int lengthOfLastWord(string s) {
       int n = s.length()-1;
       int count=0;
       while(n>=0 && s[n]==' '){
        n--;
       }
       while(n>=0 && s[n]!=' '){
        count++;
        n--;
       } 
       return count;
    }
};