#include <stdio.h>

int getSizeOfString(const char *str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}

int findThePoint(char *arr) {

    int low = 0;
    int size = getSizeOfString(arr);
    int i = 0,j = 0;
    int high = size - 1;
    while (low <= high) {
       
        if(arr[low] == '(') {
            i++;
            low++;
        }
        else if(arr[high] == ')') {
           j++;
           high--;
        }
        if(i > j) {
            high--;
        }
        
        else {
            low++;
        }
    }
    return low;
    
}
int main() {

    char arr[100];
    printf("enter string\n");
    scanf("%[^\n]",arr);

    int result = findThePoint(arr);
    printf("result = %d",result);
}

