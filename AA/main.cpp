#include <stdio.h>
#include <climits>

int main()
{
	int n, m, val, cnt = 0, max = INT_MIN;

	scanf("%d %d", &n, &m);
	
	for(int i = 0; i < n; i++){
		scanf("%d", &val);
		if(val > m){
			cnt++;
		}
		else{
			cnt = 0;
		}
		if(cnt > max){
			max = cnt;
		}
	}
	
	printf("%d\n", max);
	
	return 0;
}
