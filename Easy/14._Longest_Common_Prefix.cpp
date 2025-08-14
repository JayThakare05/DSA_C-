// Write a function to find the longest common prefix string amongst an array of strings.
// If there is no common prefix, return an empty string "".

// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        string a=strs[0];
        int j=0;
        while(j<a.length()){
        for(int i=1;i<strs.size();i++){
            if(strs[i][j]!=a[j]){
                return s;
            }
            }
            s+=a[j];
            j++;
        }
        return s;

    }
};