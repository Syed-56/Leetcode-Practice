int prefixCount(char** words, int wordsSize, char* pref) {
    int count=0;
    int prefSize = strlen(pref);
    for(int i=0; i<wordsSize; i++) {
        if(strncmp(words[i],pref,prefSize)==0)  count++;
    }
    return count;
}