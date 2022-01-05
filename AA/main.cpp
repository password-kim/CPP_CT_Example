#include <stdio.h>
#include <climits>

int main()
{
	int n, cnt = 0, max = INT_MIN;

	int a[101] = {}; // 학생들의 앉은키 정보를 받는 배열 초기화. 

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	// 배열의 끝에서부터 앞으로 가면서 앉은키를 읽음. 
	for (int i = n - 1; i >= 0; i--)
	{
		// 앞에 학생이 현재 가장큰 학생보다 크면 최댓값을 교체하고 cnt를 1증가. 
		if (a[i] > max) 
		{
			max = a[i];
			cnt++;
		}
	}
	
	// 처음 학생의 앉은키를 받을때 cnt를 1증가시켰으므로 1을 빼줌. 
	printf("%d\n", cnt - 1);


	return 0;
}
