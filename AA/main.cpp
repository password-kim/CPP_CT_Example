#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int map[11][11];

int a[11];

int main()
{
	int n, i, j, sum = 0;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			map[j][i] = a[i];
		}
	}
	
	for(i = n; i >= 1; i--){
		scanf("%d", &a[i]);
	}
	
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			if(map[i][j] > a[i]){
				map[i][j] = a[i];
			}
		}
	}
	
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			sum += map[i][j];
		}
	}
	
	printf("%d", sum);

	return 0;
}
