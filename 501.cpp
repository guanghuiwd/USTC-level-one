//я╟уркьйЩ╤т 
#include<stdio.h>
bool f(long x)
{
	long int i;
	for(i=2;i<=x/2;i++)
		if(x%i==0) return false;
	return true;
 } 
 int main()
 {
 	long long x,i,j;
 	scanf("%lld",&x);
 	
 	for(i=2;i<=x-2;i++)
 	{
 		j=i+2;
 		if(f(i)&&f(j))
 			printf("%d\t%d\n",i,j);
	 }
 }

