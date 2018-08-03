#include<stdio.h>

int main()
{
	int i,n,j=1;
	for(n=2;n<=1000;n++)
	{
		int s=0; 
		for(i=1;i<n;i++)
			if(n%i==0)
				s=s+i;
		if(n==s)
		{
			if(j%5!=0)
				printf("%d      ",n);
			else printf("%d\n",n);
			j++;
		}
	}
return 0;
} 
