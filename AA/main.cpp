#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, i, j, sum, tmp, pos, a[1000], cnt = 0;

	scanf("%d", &n);

	for (i = n; i >= 1; i--)
	{
		tmp = i;
		pos = 0;
		sum = 0;
		while (sum <= n)
		{
			if (tmp == 0)
			{
				break;
			}
			a[pos] = tmp;
			sum += tmp;
			if (sum < n)
			{
				tmp--;
				pos++;
			}
			else if (sum == n)
			{
				if (pos >= 1)
				{
					cnt++;
					for (j = pos; j >= 0; j--)
					{
						if (j == 0)
						{
							printf("%d = %d\n", a[j], n);
						}
						else
						{
							printf("%d + ", a[j]);
						}
					}
				}
				break;
			}
			else
			{
				break;
			}
		}
	}

	printf("%d", cnt);


	return 0;
}
