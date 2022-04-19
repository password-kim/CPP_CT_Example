#include <stdio.h>
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int map[9][9], ch[9][9], cnt = 0;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

void DFS(int x, int y){
	int i, xx, yy;
	if(x == 7 && y == 7){
		cnt++;
	}
	else{
		for(i = 0; i < 4; i++){
			xx = x + dx[i];
			yy = y + dy[i];
			if(xx < 1 || xx > 7 || yy < 1 || yy > 7) continue;
			
			if(map[xx][yy] == 0 && ch[xx][yy] == 0){
				ch[xx][yy] = 1;
				DFS(xx, yy);
				ch[xx][yy] = 0;
			}
		}
	}
}

int main()
{	
	int i, j;
	
	for(i = 1; i <= 7; i++){
		for(j = 1; j <= 7; j++){
			scanf("%d", &map[i][j]);
		}
	}
	
	ch[1][1] = 1;
	
	DFS(1,1);
	
	printf("%d\n", cnt);
	
	return 0;
}
