#include <stdio.h>
int main()
{
    int days, month, year, no, rday, rmon, ryear, totdays;
    printf("Enter the day:");
    scanf("%d", &days);
    printf("Enter the month:");
    scanf("%d", &month);
    printf("Enter the year:");
    scanf("%d", &year);
    printf("Enter the no.of days:");
    scanf("%d", &no);
    totdays = year * 365 + month * 30 + days + no;
    ryear = totdays / 365;
    rmon = (totdays % 365) / 30;
    rday = (totdays % 365) % 30;
    if ((year % 100 == 0) && (year % 400 == 0))
    {
        printf("This is a leap year");
        printf("\n%d / %d / %d", rday, rmon, ryear);
        if ((days > 0 && days <= 31) && (month > 0 && month <= 12) && (year >= 1000))
        {
            if (days == 31)
            {
                if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12))
                {
                    printf("\nValid input");
                    printf("\n%d / %d / %d", rday, rmon, ryear);
                }
                else
                    printf("\nInvalid input");
            }
            if (month == 2)
            {
                if (days <= 29)
                {
                    printf("\nValid input");
                    printf("\n%d / %d / %d", rday, rmon, ryear);
                }
                else
                    printf("\ninvalid input");
            }
        }
        else
            printf("\nThis is a invalid input");
    }
    else if (year % 4 == 0)
    {
        printf("\nThis is a leap year");
        printf("\n%d / %d / %d", rday, rmon, ryear);
        if ((days > 0 && days <= 31) && (month > 0 && month <= 12) && (year >= 1000))
        {
            if (days == 31)
            {
                if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12))
                {
                    printf("\nValid input");
                    printf("\n%d / %d / %d", rday, rmon, ryear);
                }
                else
                    printf("\nInvalid input");
            }
            if (month == 2)
            {
                if (days <= 29)
                {
                    printf("\nValid input");
                    printf("\n%d / %d / %d", rday, rmon, ryear);
                }
                else
                    printf("\ninvalid input");
            }
        }
        else
            printf("\nInvalid input");
    }
    else
    {
        printf("\nThis is not a leap year");
        printf("\n%d / %d / %d", rday, rmon, ryear);
        if ((days > 0 && days <= 31) && (month > 0 && month <= 12) && (year >= 1000))
        {
            if (days == 31)
            {
                if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12))
                {
                    printf("\nValid input");
                    printf("\n%d / %d / %d", rday, rmon, ryear);
                }
                else
                    printf("\nInvalid input");
            }
            if (month == 2)
            {
                if (days <= 28)
                {
                    printf("\nValid input");
                    printf("\n%d / %d / %d", rday, rmon, ryear);
                }
                else
                    printf("\ninvalid input");
            }
        }
        else
            printf("\nInvalid input");
    }

    return 0;
}