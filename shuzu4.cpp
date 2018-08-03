#include<stdio.h>
int main()
{
	int i,N;
	double average,sum=0;
	printf("N=");
	scanf("%d",&N);
	int a[N];
	for(i=0;i<N;i++)
	{
	
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	average=sum/N;
	printf("above:");
	for(i=0;i<N;i++){
		if(a[i]>average)
			printf("%d ",a[i]);
	}
}
