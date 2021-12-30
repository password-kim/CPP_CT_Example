#include <stdio.h>
#include <stack>
using namespace std;

int main() {
	//freopen("intput.txt", "rt", stdin);
	char a[31];
	
	stack<char> st;
	
	scanf("%s", &a);
	
	for(int i = 0; a[i] != '\0'; i++){
		if(a[i] =='('){
			st.push(a[i]);
		}
		else{
			if(a[i] == ')' && st.empty()){
				printf("NO");
				return 0;
			}
			st.pop();
		}
	}
	
	if(st.empty()){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;

}
