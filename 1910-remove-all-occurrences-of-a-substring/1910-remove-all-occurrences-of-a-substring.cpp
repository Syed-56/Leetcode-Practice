class Solution {
public:
    string removeOccurrences(string s, string part) {
        int open=0, close=part.length();
        while (close <= s.length()) {
            if(s.substr(open, close-open) == part) {
                s.erase(open, close - open);
                open = 0;
                close = open+part.length();
            }
            else {
                open++;
                close++;
            }
        }
        return s;
    }
};