#include <stdio.h>

#define MAX 100

struct Stack {
    char stack[MAX];
    int top;
};

int getSize(char *str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}

void push(struct Stack *s, char val) {
    if (s->top == MAX - 1) {
        printf("Stack overflow\n");
        return;
    }
    s->top++;
    s->stack[s->top] = val;
}

char pop(struct Stack *s) {
    if (s->top == -1) {
        return '\0';
    }
    char data = s->stack[s->top];
    s->top--;
    return data;
}

int isEmpty(struct Stack *s) {
    return s->top == -1;
}

void checkValidExpression(char str[]) {

    struct Stack s;
    s.top = -1;
    int size = getSize(str);

    for (int i = 0; i < size; i++) {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
            push(&s, str[i]);
        } 
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            if (i + 1 < size && (str[i + 1] == '+' || str[i + 1] == '-' || str[i + 1] == '*' || str[i + 1] == '/') || (str[i + 1] == ')' || str[i + 1] == ']' || str[i + 1] == '}')) {
               
                continue;
            } else {
                printf("1 Invalid expression\n");
                return;
            }
        } 
        else if (str[i] == ')' || str[i] == ']' || str[i] == '}') {
            if (isEmpty(&s)) {
                printf("2 Invalid expression\n");
                return;
            }
            char top = pop(&s);
            if ((top == '(' && str[i] != ')') ||
                (top == '[' && str[i] != ']') ||
                (top == '{' && str[i] != '}')) {
                printf("3 Invalid expression\n");
                return;
            }
        }
        else {
            if(i + 1 < size && (str[i + 1] >= 'a'|| str[i + 1] <= 'z' || str[i + 1] >= 'A' || str[i + 1] >= 'Z')) {
               continue;
            }
            else {
                printf("1 Invalid expression\n");
                return;
            }
        }
    }
    
    if (!isEmpty(&s)) {
        printf("4 Invalid expression\n");
    } else {
        printf("Valid expression\n");
    }
}

int main() {
    char str[100];
    printf("Enter expression: ");
    scanf("%s", str);

    checkValidExpression(str);

    return 0;
}
