#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int main()
{
	int n, i, j, k, cnt = 0, flag;
	
	scanf("%d", &n);
	
	//                      ��ũ��             ��ũ�� 
	vector<vector<int> > map(n + 2, vector<int>(n + 2, 0));
	
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			scanf("%d", &map[i][j]);
		}
	}
	
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			flag = 0;
			for(k = 0; k < 4; k++){
				if(map[i][j] <= map[i+dx[k]][j+dy[k]]){
					flag = 1;
					break;
				}
			}
			if(flag == 0){
				cnt++;
			}
		}
	}
	
	printf("%d", cnt);
	
	return 0;
}
