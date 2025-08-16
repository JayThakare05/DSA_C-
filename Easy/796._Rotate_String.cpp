// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string s = "abcde";
//     string dob = s + s; // "abcdeabcde"

//     cout << "dob = " << dob << endl;

//     cout << dob.find("deabc") << endl;   // 3 (found at index 3)
//     cout << dob.find("xyz") << endl;     // npos (not found)

//     if (dob.find("deabc") != string::npos)
//         cout << "Found!" << endl;
//     else
//         cout << "Not found!" << endl;

//     return 0;
// }
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!= goal.length()) return false;
        int n = s.length();
    for (int shift = 0; shift < n; shift++) {
        int j = 0;
        while (j < n && s[j] == goal[(shift + j) % n]) {
            j++;
        }
        if (j == n) return true;
    }
    return false;
    }
};