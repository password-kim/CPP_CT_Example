#include <stdio.h>

int main() {
	int n, c = 1, d = 9, sum = 0, res = 0;
	
	scanf("%d", &n);
	
	while(sum + d < n){
		sum = sum + d;
		res = res + (c * d);
		c++;
		d = d * 10;
	}
	
	res = res + (n - sum) * c;
	
	printf("%d", res);
	
	return 0;
}
