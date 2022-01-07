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
		// 다음 숫자가 현재숫자보다 크거나 같으면 수열길이 1증가. 
		if(a[i] <= a[i + 1]){
			cnt++;
		}
		// 아닐 경우 수열길이 초기화. 
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
