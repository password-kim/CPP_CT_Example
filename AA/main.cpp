#include <stdio.h>
#include <climits>

int main()
{
	int n, cnt = 0, max = INT_MIN;

	int a[101] = {}; // �л����� ����Ű ������ �޴� �迭 �ʱ�ȭ. 

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	// �迭�� ���������� ������ ���鼭 ����Ű�� ����. 
	for (int i = n - 1; i >= 0; i--)
	{
		// �տ� �л��� ���� ����ū �л����� ũ�� �ִ��� ��ü�ϰ� cnt�� 1����. 
		if (a[i] > max) 
		{
			max = a[i];
			cnt++;
		}
	}
	
	// ó�� �л��� ����Ű�� ������ cnt�� 1�����������Ƿ� 1�� ����. 
	printf("%d\n", cnt - 1);


	return 0;
}
