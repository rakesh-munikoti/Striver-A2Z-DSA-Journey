/*
Problem: #290 - Word Pattern
Platform: LeetCode
Difficulty: Easy
Approach: Bidirectional HashMap + StringStream

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <sstream>

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> mpp;
        unordered_map<string, char> revmpp;
        vector<string> words;

        stringstream ss(s);
        string word;

        while (ss >> word) {
            words.push_back(word);
        }

        if(pattern.size() != words.size()){
            return false;
        }

        for(int i = 0; i < pattern.size(); i++){
            if(mpp.find(pattern[i]) != mpp.end() && mpp[pattern[i]] != words[i]){
                return false;
            }

            if(revmpp.find(words[i]) != revmpp.end() && revmpp[words[i]] != pattern[i]){
                return false;
            }

            mpp[pattern[i]] = words[i];
            revmpp[words[i]] = pattern[i];
        }

        return true;
    }
};
