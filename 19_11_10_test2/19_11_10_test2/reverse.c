#include<stdio.h>

void Reverse(int ar[], int n)
{
	int a;
	for (int i = 0; i < n / 2; i++)
	{
		a = ar[i];
		ar[i] = ar[n - i - 1];
		ar[n - i - 1] = a;
	}
}

void main()
{
	int ar[] = { 1,2,3,4,5,6,7,8,9 };
	int n = sizeof(ar) / sizeof(int);
	Reverse(ar, n);

	for (int i = 0; i < n; i++)
		printf("%d ", ar[i]);
	printf("%d %d", sizeof(ar), sizeof(int));
}