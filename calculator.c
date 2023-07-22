#include<Stdio.h>
int main(){
    char operator; 
    int number1;
    int number2;
    double result;

    printf("Enter operator (+, -, *, /)");
    scanf("%c", &operator);

    printf("Enter number 1: ");
    scanf("%d", &number1);

    printf("Enter number 2: ");
    scanf("%d", &number2);

    switch(operator){
        case '+':
        result = number1 + number2;
        printf("%f" ,result);
        break;
        case '-':
        result = number1 - number2;
        printf("%f" ,result);
        break;
        case '*':
        result = number1 * number2;
        printf("%f" ,result);
        break;
        case '/':
        result = number1 / number2;
        printf("%f" ,result);
        break;
        default:
        printf("%c is not valid", operator);
    }

    return 0;
}