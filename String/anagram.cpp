#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        // Method 1: using the sort approach
        // if(s.length()!= t.length()) return false;
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // return s==t;

        // Method 2: using the hash map approach (using unorder map)
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;

        for(char c: s) mp1[c]++;
        for(char c: t) mp2[c]++;
        return mp1 == mp2;



    }
};

int main() {
    Solution solution;
    string s, t;

    cout << "Enter the first string: ";
    cin >> s;

    cout << "Enter the second string: ";
    cin >> t;

    if (solution.isAnagram(s, t)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}
