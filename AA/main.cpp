#include <stdio.h>
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int map[51][51];

int main()
{	
	int n, m, i, j, a, b, c;
	scanf("%d %d", &n, &m);
	
	for(i = 1; i <= m; i++){
		scanf("%d %d %d", &a, &b, &c);
		map[a][b] = c;
	}
	
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			printf("%d ", map[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
