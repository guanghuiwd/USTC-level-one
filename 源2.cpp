#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main() {
	char a;
	scanf("%c", &a);
	if(a>='a'&&a<='z'){
		printf("%c", 'a' + 'z' - a);
	}
	else printf("%c", a);
	return 0;
}