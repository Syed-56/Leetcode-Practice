class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen=0;
        string substringToPrint = "";
        int open=0, close=0;
        unordered_set<char> seen;

        while(close < s.length()) {
            if(seen.count(s[close])) {
                open++;
                close = open;
                seen.clear();   
                substringToPrint = "";
            }
            else {
                substringToPrint += s[close];
                seen.insert(s[close]);
                close++;
            }
        }
        maxLen = max(maxLen, (int)substringToPrint.length());
        return maxLen;
    }
};