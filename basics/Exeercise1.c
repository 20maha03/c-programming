#include <stdio.h>

float add(float firstNumber, float secondNumber);
float sub(float firstNumber, float secondNumber);
float multiplication(float firstNumber, float secondNumber);
float divison(float firstNumber, float secondNumber);

int main() {

    float firstNumber;
    float secondNumber;
    
    printf("enter first number\n");
    scanf("%f",&firstNumber);

    printf("enter second number \n");
    scanf("%f",&secondNumber);
    
    int option;
    printf("enter your choice\n");
    printf("1. add\n2. Sub\n3. multiplication\n 4. division");
    scanf("%d",&option);

    switch(option) {
        case 1:
            float result = add(firstNumber, secondNumber);
            printf("%f + %f = %f",firstNumber,secondNumber,result);
            break;
        case 2 :
            float result = sub(firstNumber, secondNumber);
            printf("%f - %f = %f",firstNumber,secondNumber,result);
            break;
        case 3 :
            float result = multiplication(firstNumber, secondNumber);
            printf("%f * %f = %f",firstNumber,secondNumber,result);
            break;
        case 4 :
            float result = divison(firstNumber, secondNumber);
            printf("%f / %f = %f",firstNumber,secondNumber,result);
        default :
            printf("exit");
            break;
            
    }
}

float add(float firstNumber, float secondNumber) {
    return firstNumber + secondNumber;
}

float sub(float firstNumber, float secondNumber) {
   return firstNumber - secondNumber;
}

float multiplication(float firstNumber, float secondNumber) {
    return firstNumber * secondNumber;
}

float divison(float firstNumber, float secondNumber) {
    return firstNumber / secondNumber;
}