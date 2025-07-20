class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        //Stroring Frequency of Substring
        int freqPart[26] = {0};
        for(int i=0; i < s1.length(); i++) {
            freqPart[s1[i]-'a']++;
        }

        int windowSize = s1.length();
        for(int i=0; i<s2.length(); i++) {
            int freqSame=true;
            int windowIndex=0, stringIndex=i;
            int freqWindow[26] = {0};
            
            while(windowIndex < windowSize && stringIndex < s2.length()) {
                freqWindow[s2[stringIndex]-'a']++;
                windowIndex++; stringIndex++;
            }

            for(int i=0; i<26; i++) {
                if(freqPart[i] != freqWindow[i]) {
                    freqSame=false;
                    break;
                }
            }
            if(freqSame)    return true;
        }
        return false;
    }
};