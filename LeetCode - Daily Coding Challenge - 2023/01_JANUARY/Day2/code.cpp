#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAllCaps(string word) {
        for(auto &chr: word) {
            if(chr < 'A' || chr > 'Z') {
                return false;
            }
        }
        return true;
    }
    bool isFirstLetterOnlyCaps(string word) {
        if(word[0] >= 'A' && word[0] <= 'Z') {
            return true;
        }
        return false;
    }
    bool isNotAllCaps(string word) {
        for(auto &chr: word) {
            if(chr < 'a' || chr > 'z') {
                return false;
            }
        }
        return true;
    }
    bool detectCapitalUse(string word) {
        if(isAllCaps(word) == true) {
            return true;
        }
        else if(isNotAllCaps(word) == true) {
            return true;
        }
        else if(isFirstLetterOnlyCaps(word) == true && isNotAllCaps(word.substr(1)) == true) {
            return true;
        }
        return false; 
    }
};

int main() {
    Solution obj;
    int tc;
    cin >> tc;
    while(tc--) {
        string word;
        cin >> word;
        if(obj.detectCapitalUse(word) == 1)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
}