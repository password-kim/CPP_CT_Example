#include<bits/stdc++.h>
using namespace std;

int dy[101];

int main()
{	
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	
	dy[1] = 1;
	dy[2] = 2;
	
	for(int i = 3; i <= n + 1; i++){
		dy[i] = dy[i - 1] + dy[i - 2];
	}
	
	cout << dy[n + 1] << endl;
	
	return 0;
}
