#include <stdio.h>
#include <climits>

int main()
{
	int n, k, max = INT_MIN, sum = 0;

	int a[100000] = {};

	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	// 처음 온도의 합을 구해준다. 
	for (int i = 0; i < k; i++)
	{
		sum += a[i];
	}

	if (sum > max)
	{
		max = sum;
	}
	
	// 다음 온도의 합을 구하는 과정. 
	for (int i = 1; i < n - k + 1; i++)
	{
		// 이전 처음 온도를 빼주고 새로운 온도를 더해준다. 
		sum -= a[i - 1];
		sum += a[i + k - 1];

		if (sum > max)
		{
			max = sum;
		}
	}

	printf("%d", max);

	return 0;
}
