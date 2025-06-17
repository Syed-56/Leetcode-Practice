bool equalFrequency(char* word) {
    int n = strlen(word);
	if (word[n - 1] == '\n') {
        word[n - 1] = '\0';
        n--;
    }
    int distinction = 1;
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (word[i] == word[j]) {
                distinction = 0;
            }
        }
    }
    if (distinction) return true;
	int size=0;
	char* wordArray = (char*)malloc(size * sizeof(char));
	int* wordFreq = (int*)malloc(size * sizeof(int));
	if(wordArray==NULL || wordFreq==NULL)	 exit(0);
	for(int i=0; i<n; i++) {
		int same = 1;
		if(word[i]==-1 || word[i]==' ')	continue;
		for(int j=i+1; j<n; j++) {
			if(word[i]==word[j]) {
				same++;
				word[j]=-1;
			}
		}
		wordArray = (char*)realloc(wordArray, (size + 1) * sizeof(char));
        wordFreq = (int*)realloc(wordFreq, (size + 1) * sizeof(int));
		if(wordArray==NULL || wordFreq==NULL)	 exit(0);
		wordArray[size] = word[i];
		wordFreq[size] = same;
		size++;
	}
	int store=-1;
	int similar;
	for(int i=0; i<size; i++) {
		int similarity=1;
		if(i!=0)	wordFreq[i-1]++;
		wordFreq[i]--;
		for(int i=0; i<size; i++) {
			if(wordFreq[i]==0)	store=i;
		}
		for(int j=0; j<size; j++) {
			similar=1;
			if(j==store) continue;
			if(store==0) {
				if(wordFreq[j] != wordFreq[1]) {
					similar=0;
					break;
				}
			}
			else {
				if(wordFreq[j] != wordFreq[0]) {
					similar=0;
					break;
				}
			}
		}
		for(int j=0; j<size; j++) {
			printf("%d  ",wordFreq[j]);
			if(wordFreq[i] != wordFreq[j])	similarity=0;
		}
		printf("\n");
		if(i == size-1)	wordFreq[i]++;
		
		if(similar)		return true;
		if(similarity)	return true;
	}	
	return false;
}