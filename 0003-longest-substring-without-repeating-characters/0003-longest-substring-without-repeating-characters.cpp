class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen=0;
        string substringToPrint;
        for(int i=0; i<s.length(); i++) {
            unordered_set<char> seen;
            string substring = "";
            for(int j=i; j<s.length(); j++) {
                if(seen.count(s[j]))    break;
                seen.insert(s[j]);
                substring += s[j];
            }
            if((int)substring.length() > maxLen) {
                maxLen = (int)substring.length();
                substringToPrint = substring;
            }
        }
        return maxLen;
    }
};