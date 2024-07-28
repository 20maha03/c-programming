#include <stdio.h>

int getSize(char *str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}

int findMin(int a, int b, int c) {
    if(a < b && a < c) {
        return a;
    } else if(b < a && b < c) {
        return b;
    } else {
        return c;
    }
}

int findTheNumberOfSubString(char *str) {

    int sum = 0;
    int size = getSize(str);
    
    int arr[3] = {-1,-1,-1};

    for (int i = 0; i < size; i++) {
        arr[str[i] - 'a'] = i;
        if(arr[0] != -1 && arr[1] != -1 && arr[2] != -1) {
            sum += 1 + findMin(arr[0],arr[1],arr[3]);
        }
    }
    
    return sum;
}

int main() {

    char str[100];
    printf("enter string\n");
    scanf("%s",str);

    int result = findTheNumberOfSubString(str);
    printf("result = %d",result);
}
