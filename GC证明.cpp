#include<stdio.h>
int main()
{
	int n,i,s=0,m;
	scanf("%d",&n);
	
	for(i=1;s<n;i++)
		s=s+i;
	s=s-i+1;		
	m=n-s;
	if(i%2==0)
	printf("%d/%d",i-m,m);
	else printf("%d/%d",m,i-m);
}
