class Solution {
public:
    bool isPalindrome(string s) {
        int start=0, end = s.size()-1;
        while(start < end) {
            if(s[start] != s[end])  return false;
            start++;
            end--;
        }
        return true;
    }

    void backTrack(string s, vector<vector<string>>& ans, vector<string>& combination, int call) {
        if(call==s.size()) {
            ans.push_back(combination);
            return;
        }

        for(int i=call; i<s.size(); i++) {
            if(isPalindrome(s.substr(call,i-call+1))) {
                combination.push_back(s.substr(call,i-call+1));
                backTrack(s,ans,combination,i+1);
                combination.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> combination;
        backTrack(s,ans,combination,0);
        return ans;
    }
};