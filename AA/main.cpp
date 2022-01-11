#include <stdio.h>

int main()
{
	int n, a[10000] = {}, res[10000] = {};

	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	for(int i = 0; i < n; i++){
		res[i] = 1;
	}
	
	for(int i = n -1; i >= 0; i--){
		for(int j = i - 1; j >= 0; j--){
			if(a[i] <= a[j]){
				res[i]++;
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		printf("%d ", res[i]);
	}
	
	
	return 0;
}
