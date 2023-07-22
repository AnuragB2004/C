#include<stdio.h>
int multiply(int a, int b)
{
	int sum;
	if(b != 0)
	{
		sum = a + multiply(a, --b);
		return sum;
	}
	else
		return 0;
}
void main()
{
	int a, b;
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	int product = multiply(a, b);
	printf("Product = %d\n", product);
}