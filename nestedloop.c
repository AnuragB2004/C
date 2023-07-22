#include<stdio.h>
int main(){
    //Nested loop = loop inside another loop
    int rows, columns;
    char symbol;
    printf("Enter # of rows: ");
    scanf("%d", &rows);

    printf("Enter # of columns: ");
    scanf("%d", &columns);

    scanf("%c", &symbol);

    printf("Enter a symbol: ");
    scanf("%c", &symbol);

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= columns; j++)
        {
            printf("%c", symbol);
        }
            printf("\n");
    }
    return 0;
}