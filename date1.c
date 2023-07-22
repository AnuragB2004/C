#include <stdio.h>

// Function to check if a year is a leap year or not
int isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                return 1;
            else
                return 0;
        }
        else
            return 1;
    }
    else
        return 0;
}

// Function to get the number of days in a month
int getDaysInMonth(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 2:
            if (isLeapYear(year))
                return 29;
            else
                return 28;
        case 4: case 6: case 9: case 11:
            return 30;
        default:
            return -1;
    }
}

// Function to add x days to the given date
void addDaysToDate(int *day, int *month, int *year, int x) {
    while (x > 0) {
        // Get the number of days in the current month
        int daysInMonth = getDaysInMonth(*month, *year);
        
        // If there are enough days left in the current month, add x days to the current day
        if (x <= daysInMonth - *day) {
            *day += x;
            break;
        }
        else {
            // Subtract the number of days left in the current month
            x -= (daysInMonth - *day + 1);
            // Reset the day to 1
            *day = 1;
            // If the current month is December, reset the month to January and increment the year
            if (*month == 12) {
                *month = 1;
                (*year)++;
            }
            // Otherwise, increment the month
            else {
                (*month)++;
            }
        }
    }
}

int main() {
    int day, month, year, x;
    
    printf("Enter a date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);
    
    printf("Enter the number of days to add: ");
    scanf("%d", &x);
    
    addDaysToDate(&day, &month, &year, x);
    
    printf("New date: %02d/%02d/%d", day, month, year);
    
    return 0;
}