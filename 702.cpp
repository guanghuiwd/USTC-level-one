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

vector<int> G[maxn]; //�ڽӱ���ͼ 
vector<int> temp;   //�ݴ����Ϊ0�Ľڵ� 
int indegree[maxn]={0};   //�����ȣ���ʼ��Ϊ0 
bool tag[maxn]={false};  //�ڵ��Ƿ��Ѿ���� 

void get_degree(int n)//����ͼ��ʼ����� 
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
		printf("��%dѧ�ڣ�",k);
		for(int i=1;i<=n;i++)//������Ϊ0�����е㲢��� 
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
		for(int i=0;i<temp.size();i++)//�����Ѿ�����ĵ����ʣ�µĵ����� 
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
	printf("��ѡ��γ�����");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)//����ͼ 
	{
		int k;
		//printf("�˿γ̽ڵ����Ϊ��"); 
		scanf("%d",&k);
		for(int j=0;j<k;j++)
		{
			int v;
			//printf("ָ��γ̽ڵ㣺"); 
			scanf("%d",&v);
			G[i].push_back(v);
		}
	}
	get_degree(n);
	print(n);
}
