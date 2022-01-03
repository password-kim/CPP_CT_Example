#include <stdio.h>


int main()
{
	char a[100], b[100];
	int c[52] = {}, d[52] = {}, cnt = 0;

	scanf("%s\n", &a);
	scanf("%s", &b);

	for (int i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 65 && a[i] <= 90)
		{
			int temp = a[i] - 65;
			c[temp]++;
		}
		else
		{
			int temp = a[i] - 71;
			c[temp]++;
		}
	}

	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] >= 65 && b[i] <= 90)
		{
			int temp = b[i] - 65;
			d[temp]++;
		}
		else
		{
			int temp = b[i] - 71;
			d[temp]++;
		}
	}

	for (int i = 0; i < 52; i++)
	{
		if (c[i] != d[i])
		{
			cnt++;
			break;
		}
	}

	if (cnt == 0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}


	return 0;
}
