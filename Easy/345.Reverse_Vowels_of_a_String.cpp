// Given a string s, reverse only all the vowels in the string and return it.

// The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

 

// Example 1:

// Input: s = "IceCreAm"

// Output: "AceCreIm"

// Explanation:

// The vowels in s are ['I', 'e', 'e', 'A']. On reversing the vowels, s becomes "AceCreIm".

// Example 2:

// Input: s = "leetcode"

// Output: "leotcede"

 

// Constraints:

// 1 <= s.length <= 3 * 105
// s consist of printable ASCII characters.
class Solution {
public:
    char vowels(char s){
        if(s=='A' || s=='a' || s=='E' || s=='e' |s=='I' || s=='i' |s=='O' || s=='o' |s=='U' || s=='u') return true;
        return false;
    }

    string reverseVowels(string s) {
        int i=0,j=s.length()-1;
        while(i<j){
            while(i<j && !vowels(s[i]) ){
                i++;
            }
            while(i<j && !vowels(s[j])){
                j--;
            }
            swap(s[i++],s[j--]);
        }
        return s;
    }
};