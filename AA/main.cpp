#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int map[702][702], dy[702][702];

int main()
{
	int h, w, t1, t2, i, j, tmp, max = -2147000000;
	
	scanf("%d %d", &h, &w);
	
	for(i = 1; i <= h; i++){
		for(j = 1; j <= w; j++){
			scanf("%d", &map[i][j]);
			dy[i][j] = dy[i - 1][j] + dy[i][j - 1] - dy[i - 1][j - 1] + map[i][j];
		}
	}
	
	scanf("%d %d", &t1, &t2);
	
	for(i = t1; i <= h; i++){
		for(j = t2; j <= w; j++){
			tmp = dy[i][j] - dy[i - t1][j] - dy[i][j - t2] + dy[i - t1][j - t2];
			if(tmp > max){
				max = tmp;
			}
		}
	}
	
	printf("%d", max);

	return 0;
}
