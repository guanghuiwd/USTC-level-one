#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	int b, c, d, e;
	b = a / 1000;
	c = (a % 1000) / 100;
	d = ((a % 1000) % 100) / 10 ;
	e = a % 10 ;
	if (b >= 7)
		b -= 7;
	else b = b + 3;
	if (c >= 7)
		c -= 7;
	else c = c + 3;
	if (d >= 7)
		d -= 7;
	else d = d + 3;
	if (e >= 7)
		e -= 7;
	else e = e + 3;
	int f = d * 1000 + 100 * e + 10 * b + c;
	printf("%04d", f);

	return 0;
}