/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char** arr = (char**)malloc(n * sizeof(char*));
    if (arr == NULL) {
        printf("Memory allocation failed for array!\n");
        exit(1); 
    }

    for (int i = 0; i < n; i++) {
        arr[i] = (char*)malloc(10 * sizeof(char));
        if (arr[i] == NULL) {
            printf("Memory allocation failed for row %d!\n", i);
            exit(1);  
        }
    }

    
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            strcpy(arr[i - 1], "FizzBuzz");
        } else if (i % 3 == 0) {
            strcpy(arr[i - 1], "Fizz");
        } else if (i % 5 == 0) {
            strcpy(arr[i - 1], "Buzz");
        } else {
            sprintf(arr[i - 1], "%d", i);
        }
    }
    *returnSize = n;
    return arr;
}