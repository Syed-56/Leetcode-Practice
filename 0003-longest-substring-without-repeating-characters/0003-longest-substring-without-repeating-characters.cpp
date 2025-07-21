class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen=0;
        int open=0, close=0;
        unordered_set<char> seen;

        while(close < s.length()) {
            if(seen.count(s[close])) {
                seen.erase(s[open]);
                open++;
            } else {
                seen.insert(s[close]);
                maxLen = max(maxLen, close - open + 1);
                close++;
            }
        }
        
        return maxLen;
    }
};