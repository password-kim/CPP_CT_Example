#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main()
{
	int sum = 0, intc = 0, inth = 0;

	string c, h;

	string a;

	cin >> a;

	for (int i = 0; i < a.size(); i++)
	{
		int temp = i;
		if (a[i] == 67)
		{
			if (a[i + 1] == 72)
			{
				intc = 12;
			}
			else
			{
				while (a[temp + 1] >= 48 && a[temp + 1] <= 57)
				{
					c += a[temp + 1];
					temp++;
				}
			}
		}

		if (a[i] == 72)
		{
			if (a[i + 1] == NULL)
			{
				inth = 1;
			}
			else
			{
				while (a[temp + 1] >= 48 && a[temp + 1] <= 57)
				{
					h += a[temp + 1];
					temp++;
				}
			}
		}
	}

	if (intc == 12)
	{
		if (inth == 1)
		{
			sum = intc + inth;
		}
		else
		{
			sum = intc + atoi(h.c_str());
		}
	}
	else
	{
		if (inth == 1)
		{
			sum = atoi(c.c_str()) * 12 + inth;
		}
		else
		{
			sum = atoi(c.c_str()) * 12 + atoi(h.c_str());
		}
	}

	cout << sum;


	return 0;
}
