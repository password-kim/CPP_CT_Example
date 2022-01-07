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
	
	// ó�� �µ��� ���� �����ش�. 
	for (int i = 0; i < k; i++)
	{
		sum += a[i];
	}

	if (sum > max)
	{
		max = sum;
	}
	
	// ���� �µ��� ���� ���ϴ� ����. 
	for (int i = 1; i < n - k + 1; i++)
	{
		// ���� ó�� �µ��� ���ְ� ���ο� �µ��� �����ش�. 
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
