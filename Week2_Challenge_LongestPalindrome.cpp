#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> freq;
        
        
        for (char c : s) {
            freq[c]++;
        }

        int palindromeLength = 0;
        bool hasOdd = false;

        for (auto it : freq) {
            if (it.second % 2 == 0) {
                palindromeLength += it.second; 
            } else {
                palindromeLength += it.second - 1; 
                hasOdd = true; 
            }
        }

        
        if (hasOdd) {
            palindromeLength += 1;
        }

        return palindromeLength;
    }
};

int main() {
    Solution sol;
    string s = "abccccdd";
    cout << "Longest Palindrome Length: " << sol.longestPalindrome(s) << endl; 

    return 0;
}
