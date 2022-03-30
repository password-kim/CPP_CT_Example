#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int map[52][52];

int main()
{
	int h, w, t1, t2, i, j, k, s, sum, max = -2147000000;
	
	scanf("%d %d", &h, &w);
	
	for(i = 1; i <= h; i++){
		for(j = 1; j <= w; j++){
			scanf("%d", &map[i][j]);
		}
	}
	
	scanf("%d %d", &t1, &t2);
	
	for(i = 1; i <= h - t1 + 1; i++){
		for(j = 1; j <= w - t2 + 1; j++){
			sum = 0;
			for(k = i; k < i + t1; k++){
				for(s = j; s < j + t2; s++){
					sum += map[k][s];
				}
			}
			if(sum > max){
				max = sum;
			}
		}
	}
	
	printf("%d", max);

	return 0;
}
