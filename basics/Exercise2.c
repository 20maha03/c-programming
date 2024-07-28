#include <stdio.h>

int greatestNumber(int firstNumber, int secondNumber, int thirdNumber);

int main() {
    
    int firstNumber;
    int secondNumber;
    int thirdNumber;

    printf("enter first Number\n");
    scanf("%d",&firstNumber);

    printf("enter second Number\n");
    scanf("%d",&secondNumber);

    printf("enter third Number\n");
    scanf("%d",&thirdNumber);

    int result = greatestNumber(firstNumber, secondNumber, thirdNumber);
    printf("max = %d\n",result);
    

}

int greatestNumber(int firstNumber, int secondNumber, int thirdNumber) {

    if (firstNumber >= secondNumber && firstNumber >= thirdNumber) {
        return firstNumber;
    }else if (thirdNumber >= secondNumber && thirdNumber >= firstNumber){
        return thirdNumber;
    }
    else {
        return secondNumber;
    }
}