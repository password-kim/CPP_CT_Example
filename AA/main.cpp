#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, pos;
	
	scanf("%d", &n);
	
	vector<int> is(n+1), os(n+1);
	
	for(int i = 1; i <= n; i++){
		scanf("%d", &is[i]);
	}
	
	for(int j = n; j >= 1; j--){
		pos = j;
		for(int k = 1; k <= is[j]; k++){
			os[pos] = os[pos + 1];
			pos++;
		}
		os[pos] = j;
	}
	
	for(int m = 1; m <= n; m++){
		printf("%d ", os[m]);
	}

	return 0;
}
