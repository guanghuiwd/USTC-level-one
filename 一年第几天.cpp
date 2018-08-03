#include<stdio.h>
int main()
{
	int x,y,z,n=0;
	scanf("%d %d %d",&x,&y,&z);
	if(x%4==0)
		if(y>2)
			n=n+1;
	if(y==1) n=z;
	if(y==2) n=31+z;
	if(y==3) n=31+28+z;
	if(y==4) n=31+28+31+z;
	if(y==5) n=31+28+31+30+z;
	if(y==6) n=31+28+31+30+31+z;
	if(y==7) n=31+28+31+30+31+30+z;
	if(y==8) n=31+28+31+30+31+30+31+z;
	if(y==9) n=212+31+z;
	if(y==10)n=243+30+z;
	if(y==11)n=273+31+z;
	if(y==12)n=304+30+z;
	printf("这一天是当年的第%d天\n",n);

}
