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
			// 두 수의 차가 1에서 N-1사이의 숫자면 b배열에 추가하고
			// 아니라면 NO를 출력하고 프로그램 종료. 
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
		// 처음 b배열을 0으로 초기화 했으므로
		// b배열에 0이있다면 1에서 n - 1의 숫자가 안나왔다는 뜻이므로
		// NO를 출력하고 프로그램 종료. 
		if (b[i] == 0)
		{
			printf("NO");
			exit(0);
		}
	}

	printf("YES");


	return 0;
}
