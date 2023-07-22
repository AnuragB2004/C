// WAP to find sum of digits of a number till it reaches to a single digit
#include <stdio.h>

int main() {
    int num, sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0 || sum > 9) {
        if (num == 0) {
            num = sum;
            sum = 0;
        }
        rem = num % 10;
        sum += rem;
        num /= 10;
    }
    printf("Sum of digits until it becomes a single digit: %d", sum);
    return 0;
}