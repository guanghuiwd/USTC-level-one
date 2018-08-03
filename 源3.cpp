#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int A[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int flag = 1;
	
	if(a%4==0){
		A[2] = 29;
	}
	if (b <= 0 || b > 12) {
		flag = 0;
	}
	if (c <= 0 || c > A[b]) {
		flag = 0;
	}
	if (flag == 0) {
		printf("²»ÕýÈ·");
	}
	return 0;
}