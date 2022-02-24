#include <stdio.h>
#include <iostream>
using namespace std;

int C[20];

int main()
{
	int s, n, a, pos;
	
	scanf("%d %d", &s, &n);
	
	for(int i = 1; i <= n; i++){
		scanf("%d", &a);
		pos = -1;
		for(int j = 0; j < s; j++){
			if(C[j] == a){
				pos = j;
			}
		}
		
		if(pos == -1){
			for(int k = s - 1; k >= 1; k--){
				C[k] = C[k - 1];
			}
		}
		else{
			for(int l = pos; l >= 1; l--){
				C[l] = C[l - 1];
			}
		}
		
		C[0] = a;
	}
	
	for(int m = 0; m < s; m++){
		printf("%d ", C[m]);
	}

	return 0;
}
