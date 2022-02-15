#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int n, temp, cnt = 0;

	int a[100] = {};

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] > a[i])
			{
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (a[i] > a[i + 1])
		{
			cnt++;
		}

		if (cnt == 2)
		{
			printf("%d", a[i + 1]);
			break;
		}
	}


	return 0;
}
