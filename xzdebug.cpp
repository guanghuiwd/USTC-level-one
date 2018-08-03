#include<stdio.h>
#include<string.h>
int main()
{
	char wen[10000];
	gets(wen);
	char a[]="debug";
	if(strstr(wen,a))
		printf("find!");
	else printf("sorry");
}
