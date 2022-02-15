#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int n, idx, temp;

	int a[100] = {};

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n; i++)
	{
		idx = i;
		for (int j = i + 1; j < n; j++)
		{
			if(a[j] < a[idx]){
				idx = j;
			}
		}
		temp = a[idx];
		a[idx] = a[i];
		a[i] = temp;
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}


	return 0;
}
