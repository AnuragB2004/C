//WAP in C to reverse a number
#include<stdio.h>
int main(){
    int a, reversed = 0, b;
    printf("Enter a number to be reversed: ");
    scanf("%d", &a);

    while(a != 0)
    {
        b = a % 10;
        reversed = reversed * 10 + b;
        a = a / 10;
    }

    printf("Reversed number is %d", reversed);
    return 0;
}