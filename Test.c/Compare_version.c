#include <stdio.h>


int getSize(char *str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}

int versionCompare(char v1[100], char v2[100]) {
      
    int vnum1 = 0, vnum2 = 0;
    int v1Size = getSize(v1);
    int v2Size = getSize(v2);

        for (int i = 0, j = 0; (i < v1Size || j < v2Size);) {
            
            while (i < v1Size && v1Size != '.') {
                vnum1 = vnum1 * 10 + (v1[i] - '0');
                i++;
            }

            while (j < v2Size && v2Size != '.') {
                vnum2 = vnum2 * 10 + (v2[j] - '0');
                j++;
            }

            if (vnum1 > vnum2) {
                return 1;
            }
            if (vnum2 > vnum1) {
                return -1;
            }

            vnum1 = vnum2 = 0;
            i++;
            j++;
        }
    return 0;
}
int main() { 

    char str1[100];
    printf("enter string1\n");
    scanf("%s[^\n]",str1);
    
    char str2[100];
    printf("enter string2\n");
    scanf("%s[^\n]",str2);

    if (versionCompare(str1, str2) < 0) {
        printf("%s is smaller",str1);
    }
    else if (versionCompare(str1, str2) > 0) {
        printf(" %s is smaller",str2);
    }
    else {
        printf("Both version are equal");
    }
    
}