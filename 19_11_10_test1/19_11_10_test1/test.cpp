#include<stdio.h>

int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 2) + Fib(n - 1);
}

void main()
{
	int n;
	while (1)
	{
		printf("intput n:>");
		scanf("%d",&n);
		int result_s = Fib(n);
		printf("�� %d ���ֵΪ:> %d\n", n, result_s);
	}
}