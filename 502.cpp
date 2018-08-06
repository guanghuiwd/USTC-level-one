//分解因式相关，适合算法的题目（高级题）
//关键在理解（nn，m-1）和（nn/m，m）

#include <stdio.h>

int Q502(int nn,int m)
{
	if(nn==1){
		return 1;
	}
	if(m==1){
		return 0;
	}
	if (nn%m ==0){
		return Q502(nn,m-1) + Q502(nn/m,m);
	}
	return Q502(nn,m-1);
}

int main()
{
    int a;
    scanf("%d",&a);
        
    printf("%d\n",Q502(a,a));
    
    return 0;
}

