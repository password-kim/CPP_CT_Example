#include <stdio.h>

int main()
{
	int n, cnt = 0, tmp;
	
	scanf("%d", &n);
	
	for(int i = 3; i <= n; i++){
		tmp = i;
		while(1){
			if(tmp % 10 == 3){
				cnt++;
			}
			
			tmp /= 10;
			
			if(tmp == 0){
				break;
			}
		}
	}
	
	printf("%d", cnt);

	return 0;
}
