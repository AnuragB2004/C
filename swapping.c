#include<stdio.h>
int main(){
    int a =5; 
    int b= 6;
    printf("The value of two numbers are %d and %d", a , b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The swapped value of two numbers are %d and %d", a, b);
    return 0;
}