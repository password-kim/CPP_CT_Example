#include <iostream>
using namespace std;

int main() {
	int n, m, sum = 0;
	
	cin >> n >> m;
	
	for(int i = n; i < m + 1; i++){
		sum += i;
		if(i == m)
		{
			cout << i << " = " << sum << endl;
			
		}
		else
		{
			cout << i << " + ";
		}
			
	}
}
