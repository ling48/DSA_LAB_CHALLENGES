#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> freq;
        
        for (char c : s) {
            freq[c]++;
        }

        
        for (int i = 0; i < s.length(); i++) {
            if (freq[s[i]] == 1) {
                return i;
            }
        }

        return -1; 
    }
};

int main() {
    Solution sol;
    string s = "leetcode";
    cout << "First Unique Character Index: " << sol.firstUniqChar(s) << endl;  

    string s2 = "loveleetcode";
    cout << "First Unique Character Index: " << sol.firstUniqChar(s2) << endl; 

    return 0;
}
