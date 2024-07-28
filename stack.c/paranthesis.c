#include <stdio.h>

#define MAX 100

struct Stack {
    char stack[MAX];
    int top;
};

// Function to get the size of the string
int getSize(char *str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}

// Function to push a character onto the stack
void push(struct Stack *s, char val) {
    if (s->top == MAX - 1) {
        printf("Stack overflow\n");
        return;
    }
    s->top++;
    s->stack[s->top] = val;
}

// Function to pop a character from the stack
char pop(struct Stack *s) {
    if (s->top == -1) {
        return '\0';
    }
    char data = s->stack[s->top];
    s->top--;
    return data;
}

// Function to check if the stack is empty
int isEmpty(struct Stack *s) {
    return s->top == -1;
}

// Function to remove unbalanced parentheses from the input string
void removeUnbalanced(char input[]) {
    struct Stack s;
    s.top = -1;
    int size = getSize(input);
    int index[MAX]; 

    for (int i = 0; i < size; i++) {
        if (input[i] == '(') {
            push(&s, '(');
            index[s.top] = i; 
        } else if (input[i] == ')') {
            if (!isEmpty(&s)) {
                pop(&s);
            } else {
                input[i] = ' '; 
            }
        }
    }

   while (!isEmpty(&s)) {
        input[index[s.top]] = ' ';
        pop(&s);
    }

   int writeIndex = 0;
    for (int readIndex = 0; input[readIndex] != '\0'; readIndex++) {
        if (input[readIndex] != ' ') {
            input[writeIndex++] = input[readIndex];
        }
    }
    input[writeIndex] = '\0';

    printf("Output: %s\n", input);
}

int main() {
    char str[MAX];
    printf("Enter string: ");
    scanf("%[^\n]", str);

    removeUnbalanced(str);

    return 0;
}
