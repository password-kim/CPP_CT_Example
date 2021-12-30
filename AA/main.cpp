#include <stdio.h>
#include <iostream>
using namespace std;

int cnt[50001];

int main() {
	//freopen("intput.txt", "rt", stdin);
	
	int n;
	
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		for(int j = i; j <= n; j += i){
			cnt[j]++;
		}
	}
	
	for(int i = 1; i <= n; i++){
		printf("%d ", cnt[i]);
	}

	return 0;
}
