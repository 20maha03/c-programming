#include <stdio.h>

void substring(char *arr, int from, int to) {
    char ans[100];
    int j = 0; 
    for (int i = from; i < to ; i++) {
        ans[j++] = arr[i];
    }
    ans[j] = '\0'; 
    printf("result = %s\n", ans);
}

int getsizeOfTheString(char *str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}

int getTheLenOfSubstring(char * str) {
    int hash[256];
    for(int i = 0; i < 256; i++) {
        hash[i] = -1;
    }

    int left = 0;
    int max = 0;
    int right = 0;
    int start = 0;
    int end = 0;
    for(right = 0; str[right] != '\0'; right++) {
        if(hash[str[right]] != -1) {
            if(hash[str[right]] >= left) {
                left = hash[str[right]] + 1;
            }   
        }
        int length = right - left + 1;

        if (length >= max) {
            max = length;
            start = left;
            end = right;
        }
        hash[str[right]] = right;
    }

    substring(str,start,end + 1);
    return max;
}


int main() {
 
    char str[100];

    printf("enter array\n");
    scanf("%99[^\n]s",str);
    
    int result = getTheLenOfSubstring(str);
    printf("result = %d",result);

    return 0;

}
