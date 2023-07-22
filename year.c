#include <stdio.h>
int main()
{
    int dd, mm, yyyy;
    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    if (yyyy >= 1900 && yyyy <= 9999)
    {
        if (mm >= 1 && mm <= 12)
        {
            if ((dd >= 1 && dd <= 31) && (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12))
                printf("Date is Valid!\n");
            else if ((dd >= 1 && dd <= 30) && (mm == 4 || mm == 6 || mm == 9 || mm == 11))
                printf("Date is Valid!\n");
            else if ((dd >= 1 && dd <= 28) && (mm == 2))
                printf("Date is valid!\n");
            else if ((dd == 29 && mm == 2 && (yyyy % 400 == 0 || yyyy % 4 == 0 && yyyy % 100 != 0)))
                printf("Date is Valid!");
            else
                printf("Date is not valid!");
        }
        else
        {
            printf("Month is not valid");
        }
        else
        {
            printf("Year is not valid");
        }
    }
    return 0;
}