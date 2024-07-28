#include <stdio.h>

void generateNextSequence(char *current, char *next) {
    int length = strlen(current);
    int i, count, index = 0;

    for (i = 0; i < length; i++) {
        count = 1;
        while (i + 1 < length && current[i] == current[i + 1]) {
            count++;
            i++;
        }
        next[index++] = count + '0';
        next[index++] = current[i];
    }
    next[index] = '\0';
}
void printPattern(int lines) {
    char current[1000] = "1"; 
    char next[1000];
    
    for (int i = 0; i < lines; i++) {
        
        for (int j = 0; current[j] != '\0'; j++) {
            printf("%c ", current[j]);
        }
        printf("\n");
        
       
        generateNextSequence(current, next);
        strcpy(current, next);
    }
}

int main() {
    int lines = 8;
    printPattern(lines);
    return 0;
}


/* 1
1 1
2 1
1 2 1 1
1 1 1 2 2 1
3 1 2 2 1 1
1 3 1 1 2 2 2 1 */