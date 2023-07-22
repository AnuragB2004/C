#include <stdio.h>
int main()
{
    int CP, SP, profit, loss;
    printf("Enter Cost price: ");
    scanf("%d", &CP);
    printf("Enter Selling Price: ");
    scanf("%d", &SP);
    if (CP > SP)
    {
        printf("Loss\n");

        loss = CP - SP;
        printf("%d", loss);
    }
    else if (CP < SP)
    {
        printf("Profit\n");
        profit = SP - CP;
        printf("%d", profit);
    }
    else if (CP == SP)
    {
        printf("No profit no loss");
    }

    return 0;
}