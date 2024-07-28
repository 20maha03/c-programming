
#include <stdio.h>

void isValidParanthesis(char input[], int size);

char arr[100];
int top = -1;

void push(char val)
{
    if (top == 100 - 1)
    {
        printf("Stack overflow\n");
        return;
    }
    top++;
    arr[top] = val;
}

char pop()
{
    if (top == -1)
    {
        return '\0';
    }
    char data = arr[top];
    top--;
    return data;
}

int isEmpty()
{
    return top == -1;
}

int main()
{
    int size;
    printf("enter size\n");
    scanf("%d",&size);
    char input[size];
    printf("enter string\n");
    scanf(" %s",&input);

    isValidParanthesis(input, size);
    /* //char input[] = "{([[)}";
    int len = sizeof(input) / sizeof(input[0]) - 1;

    for (int i = 0; i < len; i++)
    {
        char ch = input[i];
        if (ch == '{' || ch == '[' || ch == '(')
        {
            push(ch);
        }
        else
        {
            char last = pop();
            if ((ch == '}' && last != '{') || (ch == ']' && last != '[') || (ch == ')' && last != '('))
            {
                printf("false\n");
                return 0;
            }
        }
    }

    if (isEmpty())
    {
        printf("true\n");
        return 1;
    }
    else
    {
        printf("false\n");
        return 0;
    }
} */
}

void isValidParanthesis(char input[], int size) {
    
    int index = -1;
    
    char stack[size];

    for (int i = 0; i < size; i++) {

        if(input[i] == '(' || input[i] == '{' || input[i] == '[') {
             stack[++index] = input[i];
        }

        else {
            if(index >= 0 &&((input[i] == ')' && stack[index] == '(') || (input[i] == '}' && stack[index] == '{') || (input[i] == ']' && stack[index] == '[')))  {
                index--;
            }
            else {
                printf("false..\n");
                return;
            } 
        }
    }
    
    if (index == -1) {
        printf("true");
    }   
    else {
        printf("false\n");
    }
}
