#include <stdio.h>


int main()
{
	int n, sum = 0, num, ans;
	
	scanf("%d\n", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d %d", &num, &ans);
		for(int j = 0; j <= num; j++){
			sum = sum + j;
		}
		if(ans == sum){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
		sum = 0;
	}
	
	return 0;
}
