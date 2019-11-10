#include<stdio.h>


void BubbleSort(int ar[], int n)
{
	int tmp;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i -1; j++)
		{
			tmp = ar[j];
			if (ar[j] < ar[j+1])
				{
				ar[j] = ar[j + 1];
				ar[j + 1] = tmp;
				}
		}
	}


}


void main()
{
	int ar[] = { 1,2,3,4,5,6,7,8 };
	int n = sizeof(ar) / sizeof(int);
	BubbleSort(ar, n);
	for (int i = 0; i < n; i++)
		printf("%d ", ar[i]);

}