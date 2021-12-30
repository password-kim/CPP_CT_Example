#include <stdio.h>

int digit_sum(int x){
	int temp, sum = 0;
	while(x > 0){
		temp = x%10;
		sum += temp;
		x =x / 10;
	}
	
	return sum;
}

int main() {
	//freopen("intput.txt", "rt", stdin);
	
	int n, num, sum, max = -2147000000, res;
	
	scanf("%d\n", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d", &num);
		sum = digit_sum(num);
		if(sum > max){
			max = sum;
			res = num;
		}
		else if(sum == max){
			if(num > res){
				res = num;
			}
		}
	}
	
	printf("%d", res);
	
	return 0;
}
