#include <stdio.h>
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

stack<int> s;

void stackRec(int x){
	if(x == 1){
		s.push(x);
		return ;
	}
	else{
		s.push(x);
		stackRec(x - 1);
	}
}

int main()
{	
	int n, res[21], i;
	
	scanf("%d", &n);
	
	stackRec(n);
	
	for(i = 1; i <= n; i++){
		res[i] = s.top();
		s.pop();
	}
	
	for(i = 1; i <= n; i++){
		printf("%d ", res[i]);
	}
	
	return 0;
}
