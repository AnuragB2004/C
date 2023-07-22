//WAP to check that a given number is palindrome or not
#include<stdio.h>
#include<math.h>
int main(){
    int a, reversed = 0, b,t;
    printf("Enter a number to be reversed: ");
    scanf("%d", &a);
    t=a;
    while(a != 0)
    {
        b = a % 10;
        reversed = reversed * 10 + b;
        a = a / 10;
    }

    printf("Reversed number is %d\n", reversed);

    if (t == reversed)
    {
        printf("Number is palindrome\n", reversed);
    }
    else
        printf("Number is not palindrome\n", reversed);
    return 0;
}