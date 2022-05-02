#include <stdio.h>
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <queue>
using namespace std;

int ch[10001], d[3] = {1, -1, 5};

int main()
{	
	int s, e, x, pos, i;
	scanf("%d %d", &s, &e);
	
	queue<int> Q;
	
	ch[s] = 1;
	Q.push(s);
	
	while(!Q.empty()){
		x = Q.front();
		Q.pop();
		for(i = 0; i < 3; i++){
			pos = x + d[i];
			if(pos <= 0 || pos > 10000) continue;
			if(pos == e){
				printf("%d\n", ch[x]);
				exit(0);
			}
			if(ch[pos] == 0){
				ch[pos] = ch[x] + 1;
				Q.push(pos);
			}
		}
	}
	
	
	return 0;
}
