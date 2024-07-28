#include <stdio.h>


#define MAX 100

struct Stack {
    char stack[MAX][100];
    int top;
};

void push(struct Stack *s, char *val) {
    if (s->top == MAX - 1) {
        printf("Stack overflow\n");
        return;
    }
    s->top++;
    strcpy(s->stack[s->top], val);
}

char* pop(struct Stack *s) {
    if (s->top == -1) {
        return NULL;
    }
    return s->stack[s->top--];
}

int isEmpty(struct Stack *s) {
    return s->top == -1;
}

void display(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return;
    }
    for (int i = s->top; i >= 0; i--) {
        printf("%s\n", s->stack[i]);
    }
}

int my_strcmp(const char *s1, const char *s2) {
    return strcmp(s1, s2);
}

void removeDuplicates(int size, char arr[size][100]) {
    struct Stack s;
    s.top = -1;

    if (size == 0) {
        return;
    }

    for (int i = 0; i < size; i++) {
        if (!isEmpty(&s) && my_strcmp(arr[i], s.stack[s.top]) == 0) {
            pop(&s);
        } else {
            push(&s, arr[i]);
        }
    }
    
    display(&s);
}

int main() {
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    char arr[size][100];

    printf("Enter string array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%s", arr[i]);
    }

    removeDuplicates(size, arr);

    return 0;
}
