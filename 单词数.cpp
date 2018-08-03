#include<stdio.h>
int main()
{
	char a[100];
	gets(a);
	int i=0,word=0,n=0;
	while(a[i]!='\0')
	{
		if(a[i]==' ')
			word=0;
		else 
		{
		if(word==0)
		{
			n++;
			word=1;
		}
			else word=1;
		}
		i++;
		
	}
	printf("µ¥´Ê×ÜÊý£º%d",n);
	return 0;
 } 
