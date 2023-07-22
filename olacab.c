#include <stdio.h>
/*
OLA CAB
C PROGRAM TO CALCULATE THE FARE OF A TRIP
Base fare = 50 (To be charged)
0 TO 10 KM - RS. 100
11 TO 15 KM - RS. 10 PER KM
16 TO 20 KM - RS. 5 PER KM
21 TO 25 KM - RS. 4 PER KM
ABOVE 25 KM - RS. 3 PER KM
*/
int main()
    {
    int dist;
    float fare;
    printf("Enter the distance in km: ");
    scanf("%d", &dist);

    if(dist == 0)
        fare = 50;
    else if (dist > 0 && dist <= 10)
        fare = 100 + 50;
    else if (dist >= 11 && dist <= 15)
        fare = ((dist - 10) * 10 + 150);
    else if (dist >= 16 && dist <= 20)
        fare = 150 + (dist - 15) * 5 + 5 * 10;
    else if (dist >= 21 && dist <= 25)
        fare = 150 + 5 * 10 + 5 * 5 + (dist - 20) * 4;
    else if (dist > 25)
        fare = 150 + 5 * 10 + 5 * 5 + 5 * 4 + (dist - 25) * 3;
    printf("Total fare is %f", fare);
    return 0;
}