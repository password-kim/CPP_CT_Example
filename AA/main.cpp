#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int n, temp;

	int a[100];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	for(int i = 1; i < n; i++){
		temp = a[i];
		for(int j = i - 1; j >= 0; j--){
			if(a[j] > temp){
				a[j + 1] = a[j];
			}
			else{
				break;
			}
			a[j] = temp;
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}
