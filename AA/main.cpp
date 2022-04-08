#include <stdio.h>
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

void D(int v){
	if(v > 7) return;
	else{
		// printf("%d ", v); <= 전위순회 
		D(v * 2);
		// printf("%d ", v); <= 중위순회 
		D(v * 2 + 1);
		// printf("%d ", v); <= 후위순회 
	}
}

int main()
{	
	D(1);
	
	return 0;
}
