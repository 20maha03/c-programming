#include <stdio.h>

int getsize(char *str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}

int romanToInt(char* s) {
    int len = getsize(s);
    int ans = 0;

    int values[128]; 
    values['I'] = 1;
    values['V'] = 5;
    values['X'] = 10;
    values['L'] = 50;
    values['C'] = 100;
    values['D'] = 500;
    values['M'] = 1000;


    for (int i = 0; i < len; i++) {
        int current = values[s[i]];
        printf("curernt = %d\n",current);
        if (i + 1 < len && values[s[i + 1]] > current) {
            ans -= current;
        } 
        else {
            ans += current;
        }
    }

    return ans;
}

int main() {

    char str[100];
    printf("enter roman\n");
    scanf("%s",str);

    int result = romanToInt(str);
    printf("result = %d",result);
}
