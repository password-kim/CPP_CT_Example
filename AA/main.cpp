#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
	int n;

	int a[100], res[100] = {};
	
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(int i = 0; i < n; i++){
		res[i] = 1;
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(a[i] < a[j]){
				res[i]++;
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		printf("%d ", res[i]);
	}



	return 0;
}
