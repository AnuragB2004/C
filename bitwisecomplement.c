#include <stdio.h>

int main()
{
    int num1 = 15, num2 = 10;

    // Bitwise AND
    int andResult = num1 & num2;
    printf("Bitwise AND: %d & %d = %d\n", num1, num2, andResult);

    // Bitwise OR
    int orResult = num1 | num2;
    printf("Bitwise OR: %d | %d = %d\n", num1, num2, orResult);

    // Bitwise XOR
    int xorResult = num1 ^ num2;
    printf("Bitwise XOR: %d ^ %d = %d\n", num1, num2, xorResult);

    // Complement
    int complement = ~num1;
    printf("Complement: ~%d = %d\n", num1, complement);

    return 0;
}
