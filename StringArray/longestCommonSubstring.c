#include <stdio.h>

#define ROW 1024
#define COL 100

void strcopy(char *dest, const char *src) {
    while ((*dest++ = *src++));
}

int stringCmpr(const char *s1, const char *s2) {
    while (*s1 && *s2 && *s1 == *s2) {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

void printArray(char ans[][COL], int totalSize) {
    for (int i = 0; i < totalSize; i++) {
        printf("%s\n", ans[i]);
    }
}

int getSizeOfString(const char *str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}

void findLongestSubSequence(char ans1[][COL], int size1, char ans2[][COL], int size2) {
    char result[100] = "";
    int max = 0;
    for (int i = size1 - 1; i >= 0; i--) {
        for (int j = size2 - 1; j >= 0; j--) {
            if (stringCmpr(ans1[i], ans2[j]) == 0) {
                int len = getSizeOfString(ans1[i]);
                if(len > max) {
                    max = len;
                    strcopy(result, ans1[i]);
                }
            }
        }
    }

    printf("Longest common subsequence = %s\n", result);
}

void fun(const char *str, int index, int size, char ans[][COL], int *ansIndex, char currentSeq[], int currentSeqIndex) {
    if (index == size) {
        currentSeq[currentSeqIndex] = '\0';
        strcopy(ans[*ansIndex], currentSeq);
        (*ansIndex)++;
        return;
    }

    fun(str, index + 1, size, ans, ansIndex, currentSeq, currentSeqIndex);

    currentSeq[currentSeqIndex] = str[index];
    fun(str, index + 1, size, ans, ansIndex, currentSeq, currentSeqIndex + 1);
}


int main() {
    char str1[100];
    printf("Enter first string: ");
    scanf(" %[^\n]s", str1);
    
    char str2[100];
    printf("Enter second string: ");
    scanf(" %[^\n]s", str2);

    int size1 = getSizeOfString(str1);
    char ans1[ROW][COL] = {0};
    int ansIndex1 = 0; 
    char currentSeq1[COL]; 
    fun(str1, 0, size1, ans1, &ansIndex1, currentSeq1, 0);
    
    printf("Subsequences of first string:\n");
    printArray(ans1, ansIndex1);
    
    int size2 = getSizeOfString(str2);
    char ans2[ROW][COL] = {0};
    int ansIndex2 = 0; 
    char currentSeq2[COL]; 
    fun(str2, 0, size2, ans2, &ansIndex2, currentSeq2, 0);

    printf("Subsequences of second string:\n");
    printArray(ans2, ansIndex2);

    findLongestSubSequence(ans1, ansIndex1, ans2, ansIndex2);

    return 0;
}
