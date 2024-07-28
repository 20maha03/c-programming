#include <stdio.h>

int findPerfectSquare(int number);

int main() {

    int number;
    
    printf("enter number");
    scanf("%d",&number);

    int result = findPerfectSquare(number);

    printf("result = %d",result);

}

int findPerfectSquare(int number) {

    int low = 1;
    int high = number;

    while (low <= high) {
        int mid = (low + high) / 2;

        int ans = mid * mid;

        if(number >= ans) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return high;
}