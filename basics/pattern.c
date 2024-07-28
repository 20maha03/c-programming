#include <stdio.h>

void p1(int number);
void p2(int number); 
void p4(int number);
void p3(int number);
void p5(int number);
void p6(int number);
void p8(int number);
void p7(int number);
void p9(int number);
void p10(int rows);
void p11(int rows);
void p12(int number);
void p13(int number);
void p14(int number);

int main()
{
    int number;

    printf("enter number\n");
    scanf("%d", &number);

    p14(number);
    return 0;
}

void p1(int number)
{
    char a = 'A';
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= number; j++)
        {
            if (i == j)
            {
                printf("%C ", a);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        a++;
    }
}

void p2(int number)
{
    int c = number;
    char a = 'A';
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= number; j++)
        {
            if (j == c)
            {
                printf("%c ", a);
            }
            else
            {
                printf("* ");
            }
        }
        printf("/n");
        a++;
        c--;
    }
}

void p3(int number)
{
    int a = number;
    char c = 'A';
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= number; j++)
        {
            if (i == j)
            {
                printf("%c ", c);
            }
            else if (j == a)
            {
                printf("%c ", c);
            }
            else
            {
                printf("* ");
            }
        }
        a--;
        c++;
        printf("\n");
    }
}

void p4(int number)
{
    int a = number;
    char c = 'A';
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= number; j++)
        {
            if (i == j)
            {
                printf("%c ", c);
            }
            else if (j == a)
            {
                printf("%c ", c);
            }
            else
            {
                printf(" ");
            }
        }
        a--;
        c++;
        printf("\n");
    }
}

void p5(int number){
    for (int i = 1; i < 2 * number; i++){
        for (int j = 1; j <= number; j++){
            if (i == 1 || i == number || j == number || j == 1|| i == (2 * number) - 1){
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    
    }
}

void p6(int number) {
    for (int i = 1; i < 2 * number; i++){
        for (int j = 1; j <= number; j++){
            if (j == 1 && i == 1 || j == 1 && i == number || j == number && i == number || j == number && i == 1 || i == (2 * number) - 1 && j == 1 || i == (2 * number) - 1 && j == number) {
                printf("  ");
            }
            else if (i == 1 || i == number || j == number || j == 1|| i == (2 * number) - 1){
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    
    }
}
void p7(int number) {
    int mid = number / 2;
    for (int i = 0; i < number; i++) {
        for(int j = 0; j < number; j++) {
            if (i <= mid) {
                if (j == mid - i || j == mid + i) {
                    printf("* ");
                }
                else {
                    printf(" ");
                }
            }
            else if (i > mid) {
                if (j == i - mid || j == number - 1 - (i - mid) ) {
                    printf("* ");
                }
                else {
                    printf(" ");
                }
            }

        }
        printf("\n");
    }
}


void p9(int number) {
    int mid = ((number * 2) / 2) - 1;
    for (int i = 0; i < number; i++) {
        int count = 1;
        for (int j = 0; j < (2 * number) - 1; j++) {
            if (j > mid - i -1 && j < mid + i + 1) {
                printf("%d ",count++);
            }
            else {
                printf("  ");
            } 
        }

        printf("\n");
    }
}

void p10(int rows) {

	
	for (int i = 0; i < rows; i++) { 

		 
		for (int j = 0; j < 2 * (rows - i) - 1; j++) { 
			printf(" "); 
		} 
 
		for (int k = 1; k <= 2 * i + 1; k++) { 
			printf("%d ",k); 
		} 
		printf("\n"); 
	} 
	return 0; 
}

void p11(int number) {
    for (int i = 0; i < number*2-1; i++) {
       int row = i>number-1?2*number-2-i:i;
       for (int j = 0; j < 2 * number-1; j++) {
            if (j <= row || j >= 2 *number -2- row) {
                printf("* ");
            } 
            else{
                printf("  ");
            }

        }
    
        printf("\n"); 
    }
}


void p12(int number) {
    int row = 0;
    int count = number - 2;
    for (int i = 0; i < number; i++) {
        if (i > number / 2) {
            row = number - 1 - i;
            count += 2;
        } else {
            row = i;
        }
        for (int j = 0; j < number; j++) {
            if (row == 0 || row == number - 1) {
                 printf("%d ",j + 1);
            } else if(j == row) {
                 printf("1 ");
            } else if(j == number - row - 1) {
                printf("%d ",count);
                if(i < number / 2) {
                    count -= 2;
                }
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
}



void p13(int number) {
    int row = 0;
    for (int i = 1; i < 2 * number; i++) {
        if(i > number) {
            row =  2 * number - i;
        }
        else {
            row = i;
        }
        for (int j = 0; j < 2 * number; j++) {
            if(j >= number -row && j <= 2 * number - row - 1) {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");

    }
}

void p14(int  number) {
    
    int row = 0;
    for (int i = 1; i < 2 * number; i++) {
        if(i > number) {
            row = 2 * number - i;
        }
        else {
            row = i;
        }
        for(int j = 1; j < 2 * number; j++) {
            if(j <= number - row + 1 || j >= number + row  - 1) {
                printf("* ");
            }

            else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

