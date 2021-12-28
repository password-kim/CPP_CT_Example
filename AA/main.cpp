#include <iostream>
#include <limits>
using namespace std;

int main() {
	int n, a, res, max = INT_MIN, min = INT_MAX;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> a;
		if(a > max) max = a;
		if(a < min) min = a;
	}
	
	res = max - min;
	cout << res << endl;
}
