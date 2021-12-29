#include <stdio.h>

int main() {
	char a[101], b[101];
	
	int p = 0;
	
	gets(a);
	
	for(int i = 0; a[i] != '\0'; i++){
		if(a[i] != 32){
			//대문자 판별. 
			if(a[i] >= 65 && a[i] <=90){
				a[i] = a[i] + 32; // 대문자를 소문자로 변환. 
				b[p] = a[i]; // 대문자로 변환한 문자를 b배열에 대입. 
				p++;
			}
			else{
				b[p] = a[i]; // 소문자의 경우 그대로 대입. 
				p++;
			}
		}
	}
	
	b[p] = '\0'; // 배열의 끝을 알리는 null문자 삽입. 
	
	printf("%s", b);
	
	return 0;

}
