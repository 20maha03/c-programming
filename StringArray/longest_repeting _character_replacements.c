#include <stdio.h>

#define MAX_CHARS 52  

char arr[MAX_CHARS]; 

void put(char key, int value) {
    if(key >= 'a' && key <= 'z') {
        arr[key - 'a'] = value; 
    }
    else{
       arr[key - 'A'] = value;    
    }
    
}

int get(char key) {
    if(key >= 'a' && key <= 'z') {
        return arr[key - 'a'];   
    }
    else{
       return arr[key - 'A'];    
    }
    return 0;
    
}

void display() {
    for (int i = 0; i < MAX_CHARS; i++) {
        if (arr[i] != 0) {
            if (i < 26) {
                printf("Character: %c, Frequency: %d\n", i + 'a', arr[i]);
            } else {
                printf("Character: %c, Frequency: %d\n", i - 26 + 'A', arr[i]);
            }
        }
    }
}



int lengthOfCharReplacements(char *str, int k) {
    int left = 0;
    int right = 0;
    int maxLen = 0;
    int maxCount = 0;
    
    while (str[right] != '\0') {
        put(str[right], get(str[right]) + 1);  

        if (get(str[right]) > maxCount) {
            maxCount = get(str[right]);  
        }
        
        if (right - left + 1 - maxCount > k) {
            put(str[left], get(str[left]) - 1); 
            left++;  
        }
        
        maxLen = (right - left + 1 > maxLen) ? right - left + 1 : maxLen;
        
        right++;  
    }
    
    return maxLen;
}

int main() {
    char str[100];
    int k;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    printf("Enter the maximum number of replacements (k): ");
    scanf("%d", &k);
    
    for (int i = 0; i < MAX_CHARS; i++) {
        arr[i] = 0;
    }

    int result = lengthOfCharReplacements(str, k);
    
    display();

    printf("Length of longest substring with at most %d replacements: %d\n", k, result);
    
    return 0;
}
