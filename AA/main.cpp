#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, a[1000] = {}, sum = 1, temp;

	scanf("%d", &n);

	for (int i = n; i > 0; i--)
	{
		temp = i;

		for (int j = 2; j <= i; j++)
		{
			if (temp % j == 0)
			{
				while (temp > 1 && temp % j == 0)
				{
					a[j]++;
					temp /= j;
				}
			}
		}
	}
	
	printf("%d! = ", n);

	for (int i = 2; i <= n; i++)
	{
		if (a[i] != 0)
		{
			printf("%d ", a[i]);
		}
	}

	return 0;
}
