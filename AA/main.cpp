#include <stdio.h>
#include <algorithm>

int main()
{
	int n, temp;

	int a[100] = {}, b[100] = {};

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n - 1; i++)
	{ 
		if (a[i] > a[i + 1])
		{
			temp = a[i] - a[i + 1];
			// �� ���� ���� 1���� N-1������ ���ڸ� b�迭�� �߰��ϰ�
			// �ƴ϶�� NO�� ����ϰ� ���α׷� ����. 
			if (temp >= 0 && temp <= n - 1)
			{
				b[temp] = temp;
			}  
			else
			{
				printf("NO");
				exit(0);
			}
		}
		else
		{
			temp = a[i + 1] - a[i];
			if (temp >= 0 && temp <= n - 1)
			{
				b[temp] = temp;
			}
			else
			{
				printf("NO");
				exit(0);
			}
		}
	}

	for (int i = 1; i <= n - 1; i++)
	{
		// ó�� b�迭�� 0���� �ʱ�ȭ �����Ƿ�
		// b�迭�� 0���ִٸ� 1���� n - 1�� ���ڰ� �ȳ��Դٴ� ���̹Ƿ�
		// NO�� ����ϰ� ���α׷� ����. 
		if (b[i] == 0)
		{
			printf("NO");
			exit(0);
		}
	}

	printf("YES");


	return 0;
}
