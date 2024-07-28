#include <stdio.h>

void flush(char arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = '\0';
    }
}

void printArray(char * str, int size) {
    for (int i = 0; i < size; i++) {
        printf("%c",str[i]);
    }
    printf("\n");
}
int getsizeOfTheString(char *str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}
int getMin(char * ans,int index,int freq[]) {

    int max = 0;
    int min = 10000;  

    freq[ans[index-1]]++;  

    for (int k = 0; k < index; k++) {

        if (freq[ans[k]] > 0) {
            if (freq[ans[k]] > max) {
                max = freq[ans[k]];
            } 
            if (freq[ans[k]]  < min) {
                min = freq[ans[k]] ;
            }    
        }
    }

    return max - min;
}
int beautySum(char *str) {

    int size = getsizeOfTheString(str);

    int sum = 0;
    int index = 0;
    char ans[size];

    for (int i = 0; i < size; i++) {
        int freq[126] = {0};
        flush(ans,index);
        index = 0;
        
        for (int j = i; j < size; j++) {
            ans[index++] = str[j];
            printArray(ans,index);
            sum += getMin(ans,index,freq);
        }
    }
    return sum;
}

int main() {
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);
    
    int result = beautySum(s);
    printf("Sum of beauty of all substrings: %d\n", result);
    
    return 0;
}