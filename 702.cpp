//拓扑排序代码
#include<stdio.h>
#include<vector>
#include<stdlib.h> 

#define maxn 15

/*
12
4 2 3 4 12
1 3   
3 5 7 8 
1 5   
1 7   
1 8   
0   
0   
3 10 11 12   
1 12   
1 6   
0
*/

using namespace std;

vector<int> G[maxn]; //邻接表存放图 
vector<int> temp;   //暂存入度为0的节点 
int indegree[maxn]={0};   //存放入度，初始化为0 
bool tag[maxn]={false};  //节点是否已经输出 

void get_degree(int n)//根据图初始化入度 
{
	for(int i=1;i<=n;i++){
		for(int j=0;j<G[i].size();j++)
		{
			indegree[G[i][j]]++;
		}
	}
}

void print(int n)
{
	int num=0,k=1;
	while(num<n){
		printf("第%d学期：",k);
		for(int i=1;i<=n;i++)//获得入度为0的所有点并输出 
		{
			if(indegree[i]==0&&tag[i]==false)
			{
				num++; 
				printf("C%d ",i);
				tag[i]=true;
				temp.push_back(i);
			}	
			
		}
		printf("\n");
		for(int i=0;i<temp.size();i++)//根据已经输出的点更新剩下的点的入度 
		{
			for(int j=0;j<G[temp[i]].size();j++)
			{
				indegree[G[temp[i]][j]]--;
			}
		} 
		temp.clear();
		k++; 
	}
}        

int main()
{
	int n;
	printf("请选择课程数：");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)//输入图 
	{
		int k;
		//printf("此课程节点出度为："); 
		scanf("%d",&k);
		for(int j=0;j<k;j++)
		{
			int v;
			//printf("指向课程节点："); 
			scanf("%d",&v);
			G[i].push_back(v);
		}
	}
	get_degree(n);
	print(n);
}
