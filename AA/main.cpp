#include <stdio.h>
#include <climits>

int main()
{
	int n = 0, max = INT_MIN, res = 0, temp;

	char a[100];

	int b[10] = {};

	scanf("%s", &a);

	while (a[n] != '\0')
	{
		temp = a[n] - 48;
		b[temp]++;
		n++;
	}

	for (int i = 0; i < 10; i++)
	{
		if (b[i] >= max)
		{
			max = b[i];
			res = i;
		}
	}


	printf("%d", res);

	return 0;
}
