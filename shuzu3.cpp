#include<stdio.h>
int main()
{
	int i,t,k,m,N,nn;
	printf("N=");
	scanf("%d",&nn);
	printf("\n");
	N=nn+1;
	int a[N+1];
	for(i=0;i<N;i++)
		a[i]=0;
	for(i=1;i<N;i++)
		scanf("%d",&a[i]);
	for(k=1;k<N;k++)
		for(i=k+1;i<N;i++)
			while(a[i-1]>a[i])
			{
				t=a[i-1];
				a[i-1]=a[i];
				a[i]=t;
			}
	printf("Çë²åÈëÊý×Ö£º");
	scanf("%d",&m);
	for(i=1;i<N;i++)
		if(a[i]>m)
			break;
	for(k=N;k>i;k--)
		a[k]=a[k-1];
		a[i]=m;
	for(i=1;i<=N;i++)
		printf("%d ",a[i]);
}
