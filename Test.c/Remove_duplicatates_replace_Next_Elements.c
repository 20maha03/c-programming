#include <stdio.h>

void removeDuplicates(char input[]) {
    if (input[0] == '\0') {
        return; 
    }
    
    int seen[256] = {0}; 
    int writeIndex = 0;  
    
    for (int readIndex = 0; input[readIndex] != '\0'; ++readIndex) {
        char currentChar = input[readIndex];
        
        if (seen[currentChar] == 0) {
            seen[currentChar] = 1;
            input[writeIndex++] = currentChar;
        }
        else {
            input[writeIndex++] = currentChar + 1;
            seen[input[writeIndex - 1]] = 1;
        }
        
    }
    
   
    input[writeIndex] = '\0';
}

int main() {

    char input[100];
    
    printf("enter string\n");
    scanf("%s",input);
    
    printf("Input: %s\n", input);
    removeDuplicates(input);
    printf("Output: %s\n\n", input);
    
    return 0;
}
