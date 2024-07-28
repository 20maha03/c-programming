#include <stdio.h>

int getSize(char *str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}


int findLongestSubstring(char *str, int k) {
     
    int count = 0;
    int hash[128] = {0};

    int left = 0;
    int right = 0;
    
    int max = -1;
    int size = getSize(str);

    while (right < size) {
    
        printf("%c - %d\n",str[right] , hash[str[right]]);
        if(!hash[str[right]]) {
            count++;
        }
        hash[str[right]]++;
        while (count > k)
         {
            if(hash[str[right]]) {
                count--;
            }
            left++;
        }

        if(max < right - left + 1) {
            max = right - left + 1;
        }
        right++;
        printf("count = %d",count);
    }

    return max;

}

int main() {

    char str[100];
    printf("eneter string\n");
    scanf(" %s",str);
    
    int k = 0;
    printf("enter k\n");
    scanf("%d",&k);

    int result = findLongestSubstring(str, k);
    printf("result = %d",result);
    return 0;
}
