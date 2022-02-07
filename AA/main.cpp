#include <stdio.h>

int main()
{
	int n, lt = 1, cur, rt, k = 1, sum = 0;
	
	scanf("%d", &n);
	
	while(lt != 0){
		lt = n / (k * 10);
		cur = (n / k) % 10;
		rt = n % k;
		
		if(cur > 3){
			sum += (lt + 1) * k;
		}
		else if(cur < 3){
			sum += (lt * k);
		}
		else{
			sum += (lt * k) + (rt + 1);
		}
		
		k = k * 10;
	}
	
	printf("%d", sum);

	return 0;
}
