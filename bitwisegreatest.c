#include <stdio.h>

int main()
{
    int num1 = 10, num2 = 20, num3 = 15;
    int max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
    printf("The greatest among %d, %d, and %d is %d\n", num1, num2, num3, max);
    return 0;
}
