#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int c = 0, h = 0, pos = 0, res;

	char a[10];

	scanf("%s", &a);

	if (a[1] == 'H')
	{
		c = 1;
		pos = 1;
	}
	else
	{
		for (int i = 1; a[i] != 'H'; i++)
		{
			c = c * 10 + (a[i] - 48);

			pos = i + 1;
		}
	}
	
	if(a[pos + 1] == '\0')
	{
		h = 1;
	}
	else
	{
		for (int i = pos + 1; a[i] != '\0'; i++)
		{
			h = h * 10 + (a[i] - 48);
		}
	}

	res = c * 12 + h;
	
	printf("%d", res);

	return 0;
}
