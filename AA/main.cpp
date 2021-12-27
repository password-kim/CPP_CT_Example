#include <iostream>
using namespace std;

int main() {
	int n, m, i, sum = 0;
	
	cin >> n >> m;
	
	for(int i = 1; i < n + 1; i++){
		if(i % m == 0){
			sum += i;
		}
	}
	
	cout << sum << endl;
}
