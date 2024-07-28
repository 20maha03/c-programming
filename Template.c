#include <stdio.h>

int main() {

    int size;
    printf("enetr array size\n");
    scanf("%d",&size);

    int arr[size];
    printf("enter array elements\n");
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]);
    }

    return 0;
}

#include <stdio.h>

int main() {

    int row;
    printf("enter row size\n");
    scanf("%d",&row);

    int col;
    printf("enter col size\n");
    scanf("%d",&col);

    int arr[row][col];
    
    printf("enter array elements\n");

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    
    printf("array\n");
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ",&arr[i][j]);
        }

        printf("\n");
    }

    return 0;

}

#include <stdio.h>

int main() {
    
    int size;
    printf("enter size\n");
    scanf("%d",&size);

    char str[size][100];

    printf("enter string array elements\n");

    for (int  i = 0; i < size; i++) {
        scanf("%s",str);
    }
    
    printf("string array\n");

    for (int i = 0; i < size; i++) {
        printf("%s",str[i]);
    }

    return 0;
}

#include <stdio.h>

int main() {

    char arr[50][20] = {0};
    int i = 0;

    printf("Enter string array:\n");

    while (1)
    {
        scanf("%s", arr[i]);

        if (getchar() == '\n')
        {
            break;
        }
        i++;
    }

    printf("string array\n");

    for (int j = 0; j <= i; j++) {
        printf("%s\n", arr[j]);
    }

    return 0;
}