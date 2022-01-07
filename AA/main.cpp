#include <stdio.h>

int main()
{
	int vala = 0, valb = 0;

	int a[10], b[10];
	char c[10];

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &b[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		if (a[i] > b[i])
		{
			vala += 3;
			c[i] = 'A';
		}
		else if (a[i] < b[i])
		{
			valb += 3;
			c[i] = 'B';
		}
		else
		{
			vala++;
			valb++;
			c[i] = 'D';
		}
	}

	printf("%d %d\n", vala, valb);

	if (vala > valb)
	{
		printf("A");
	}
	else if (vala < valb)
	{
		printf("B");
	}
	else
	{
		for (int i = 9; i >= 0; i--)
		{
			if (c[i] == 'A')
			{
				printf("A");
				break;
			}
			else if (c[i] == 'B')
			{
				printf("B");
				break;
			}
			else
			{
				if (i == 0 && c[i] == 'D')
				{
					printf("D");
					break;
				}
			}
		}
	}

	return 0;
}
