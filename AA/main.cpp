#include <stdio.h>
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{	
	stack<int> s;
	
	int i, j = 1, n, m;
	
	scanf("%d", &n);
	
	vector<char> str;
	
	for(i = 1; i <= n; i++){
		scanf("%d", &m);
		s.push(m);
		str.push_back('P');
		while(i){
			if(s.empty()){
				break;
			}
			
			if(j == s.top()){
				s.pop();
				j++;
				str.push_back('O');
			}
			else{
				break;
			}
		}
	}
	
	if(!s.empty()){
		printf("impossible\n");
	}
	else{
		for(i = 0; i < str.size(); i++){
			printf("%c", str[i]);
		}
	}
	
	
	
	return 0;
}
