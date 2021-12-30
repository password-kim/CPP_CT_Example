#include <stdio.h>

int main() {
	int n, m, cnt = 0;
	
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		m = i;
		while(m > 0){
			m = m / 10;
			cnt++;
		}
	}
	
	printf("%d", cnt);
	
	return 0;
}
