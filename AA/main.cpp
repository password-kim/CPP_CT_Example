#include <stdio.h>
#include <climits>

int main()
{
	int n, cnt = 1, max = INT_MIN;
	
	int a[100000] = {}; 
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	for(int i = 0; i < n; i++){
		// ���� ���ڰ� ������ں��� ũ�ų� ������ �������� 1����. 
		if(a[i] <= a[i + 1]){
			cnt++;
		}
		// �ƴ� ��� �������� �ʱ�ȭ. 
		else{
			cnt = 1;
		}
		
		if(cnt > max){
			max = cnt;
		}
	}
	
	printf("%d", max);

	return 0;
}
