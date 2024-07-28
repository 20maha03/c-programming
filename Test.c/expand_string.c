#include <stdio.h>

void expandString(char *input) {

    char output[1000]; 
    int index = 0;
    int i = 0;

    while (input[i] != '\0') {
        if (input[i] >= 'a' && input[i] <= 'z') {
           
            char letter = input[i];
            i++;

            
            int number = 0;
            while (input[i] >= '0' && input[i] <= '9') {
                number = number * 10 + (input[i] - '0');
                i++;
            }

            
            for (int j = 0; j < number; j++) {
                output[index] = letter;
                index++;
            }
        } 
        else {
            
            output[index] = input[i];
            index++;
            i++;
        }
    }
  
    output[index] = '\0';
   
    printf("result : %s\n", output);
}

int main() {
    char input[1000];

    
    printf("Enter the string :");
    scanf("%s", input);

    
    expandString(input);

    return 0;
}
