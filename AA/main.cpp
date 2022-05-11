#include <stdio.h>
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <queue>
using namespace std;

struct Data{
	int money, when;
	Data(int a, int b){
		money = a;
		when = b;
	}
	
	bool operator<(const Data &b){
		return when > b.when;
	}
};

int main()
{	
	int n, i, j, a, b, res = 0, max = -2147000000;
	scanf("%d", &n);
	
	vector<Data> T;
	priority_queue<int> pQ;
	
	for(i = 1; i <= n; i++){
		scanf("%d %d", &a, &b);
		T.push_back(Data(a, b));
		if(b > max){
			max = b;
		}
	}
		
	sort(T.begin(), T.end());
	
	j = 0;
	for(i = max; i >= 1; i--){
		for( ; j < n; j++){
			if(T[j].when < i) break;
			pQ.push(T[j].money);
		}
		if(!pQ.empty()){
			res += pQ.top();
			pQ.pop();
		}
	}
	
	printf("%d\n", res);
	
	
}
