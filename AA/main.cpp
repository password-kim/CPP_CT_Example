#include <stdio.h>

int main() {
	char a[101], b[101];
	
	int p = 0;
	
	gets(a);
	
	for(int i = 0; a[i] != '\0'; i++){
		if(a[i] != 32){
			//�빮�� �Ǻ�. 
			if(a[i] >= 65 && a[i] <=90){
				a[i] = a[i] + 32; // �빮�ڸ� �ҹ��ڷ� ��ȯ. 
				b[p] = a[i]; // �빮�ڷ� ��ȯ�� ���ڸ� b�迭�� ����. 
				p++;
			}
			else{
				b[p] = a[i]; // �ҹ����� ��� �״�� ����. 
				p++;
			}
		}
	}
	
	b[p] = '\0'; // �迭�� ���� �˸��� null���� ����. 
	
	printf("%s", b);
	
	return 0;

}
