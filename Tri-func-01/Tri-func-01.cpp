#include<stdio.h>
void triangle(int n) 
{
	for (int row = 0; row < n; row++)
	{
		for (int star = 0; star <= row; star++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

int main()
{
	int n;
	printf("Level = ");
	scanf_s("%d", &n);
	triangle(n);
	return 0;
}
