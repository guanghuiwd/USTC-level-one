#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	int b, c, d, e;
	b = (a / 1000 + 7) % 10;
	c = ((a % 1000)/100 + 7) % 10;
	d = (((a % 1000) % 100)/10 + 7) % 10;
	e = (a%10 + 7) % 10;
	int f = d * 1000 + 100 * e + 10 * b + c;
	printf("%04d", f);

	return 0;
}