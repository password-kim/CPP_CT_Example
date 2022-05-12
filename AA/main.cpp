#include <stdio.h>
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <queue>
using namespace std;

int dy[21][21];

int DFS(int n, int r){
	if(dy[n][r] > 0){
		return dy[n][r];
	}
	if(n == r || r == 0){
		return 1;
	}
	else{
		return dy[n][r] = DFS(n - 1, r - 1) + DFS(n - 1, r);
	}
}

int main()
{	
	int n, r;
	scanf("%d %d", &n, &r);
	printf("%d\n", DFS(n, r));
	
	return 0;
}
