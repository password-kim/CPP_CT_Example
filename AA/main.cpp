#include <stdio.h>
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{	
	int n, k, i;
	scanf("%d %d", &n, &k);
	
	queue<int> Q;
	for(i = 1; i <= n; i++){
		Q.push(i);
	}
	
	while(!Q.empty()){
		for(i = 1; i < k; i++){
			Q.push(Q.front());
			Q.pop();
		}
		Q.pop();
		
		if(Q.size() == 1){
			printf("%d\n", Q.front());
			Q.pop();
		}
	}
	
	
	return 0;
}
