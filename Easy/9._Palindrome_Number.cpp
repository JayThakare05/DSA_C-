// Given an integer x, return true if x is a palindrome, and false otherwise.

// Example 1:
// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.

// Constraints:
// -231 <= x <= 231 - 1
// Follow up: Could you solve it without converting the integer to a string?

//code:-
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int k =x;
        long long sum =0;
        while(k){
            int d=k%10;
            sum=sum*10+d;
            k/=10;
        }
        if(sum==x) return true;
        return false;
    }
};