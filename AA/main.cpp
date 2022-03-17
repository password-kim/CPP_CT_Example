#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, i, key, lt = 0, rt, mid;
	
	scanf("%d %d", &n, &key);
	
	vector<int> a(n);
	
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	sort(a.begin(), a.end());
	
	rt = n - 1;
	
	while(lt <= rt){
		mid = (lt + rt) / 2;
		
		if(a[mid] == key){
			printf("%d\n", mid + 1);
			return 0;
		}
		else if(a[mid] > key){
			rt = mid - 1;
		}
		else{
			lt = mid + 1;
		}
	}
	
	return 0;
}
