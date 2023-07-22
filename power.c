#include <stdio.h>
#include <math.h>
int main()
{
    int bn, pn, result;
    printf("Enter base_number: ");
    scanf("%d", &bn);
    printf("Enter power number: ");
    scanf("%d", &pn);
    result = pow(bn, pn);
    printf("%d", result);
    return 0;
}
int power(int bn, int pn)
{
    if (pn != 0)
        return (bn * power(bn, pn - 1));
    else
        return 1;
}