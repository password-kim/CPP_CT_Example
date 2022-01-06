#include <stdio.h>

int main()
{
	int n;
	
	scanf("%d", &n);
	
	int a[100], b[100];
	
	// 1: 가위 2: 바위 3: 보 
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	for(int i = 0; i < n; i++){
		scanf("%d", &b[i]);
	}
	
	for(int i = 0; i < n; i++){
		if(a[i] == b[i]){
			printf("D");
		}
		else if(a[i] == 1 && b[i] == 3){
			printf("A");
		}
		else if(a[i] == 2 && b[i] == 1){
			printf("A");
		}
		else if(a[i] == 3 && b[i] == 2){
			printf("A");
		}
		else{
			printf("B");
		}
	}

	return 0;
}
