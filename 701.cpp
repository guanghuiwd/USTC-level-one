//哈夫曼树相关 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>
#include<queue>
#include<functional>
#include<string>
#include<map>

using namespace std;

typedef struct node//哈弗曼树的节点 
{
	int freq;
	char data;
	struct node *rchild,*lchild;
}node;

struct cmp//优先队列的比较函数 
{
	bool operator ()(node *a,node *b)
	{
		return a->freq>b->freq;
	}
};

priority_queue<node*,vector<node*>,cmp > q;//用于输出频率最小的节点 
map<char,string > mp;
string code;

node *create(int freq,char data)//创建一个节点 
{
	node *t=new node;
	t->data = data;
	t->freq = freq;
	t->lchild=t->rchild=NULL;
	return t;
}

void init()//将要编码的内容压入优先队列 
{
	q.push(create(64,'A'));
	q.push(create(13,'B'));
	q.push(create(22,'C'));
	q.push(create(32,'D'));
	q.push(create(103,'E'));
	q.push(create(21,'F'));
	q.push(create(15,'G'));
	q.push(create(47,'H'));
	q.push(create(57,'I'));
	q.push(create(1,'J'));
	q.push(create(5,'K'));
	q.push(create(32,'L'));
	q.push(create(20,'M'));
	q.push(create(57,'N'));
	q.push(create(63,'O'));
	q.push(create(15,'P'));
	q.push(create(1,'Q'));
	q.push(create(48,'R'));
	q.push(create(51,'S'));
	q.push(create(80,'T'));
	q.push(create(23,'U'));
	q.push(create(8,'V'));
	q.push(create(18,'W'));
	q.push(create(1,'X'));
	q.push(create(16,'Y'));
	q.push(create(1,'Z'));
	q.push(create(168,' '));
}

void build(node *&t)
{
	while(q.size()>1)//输出两个频率最小节点挂在新建的节点（频率为两个节点频率和）上 
	{
		node *a=q.top(); 
		q.pop();
		node *b=q.top();
		q.pop();
		node *temp=create(a->freq+b->freq,'`');
		temp->lchild=a;
		temp->rchild=b;
		q.push(temp);
	}
	t=q.top();//哈弗曼树根节点 
}

void DFS(node *t,char key,string temp)//深度优先遍历存放路径在code中 
{
	if(t==NULL)return;
	if(t->data==key)
	{
		code=temp;
		return;
	}
	DFS(t->lchild,key,temp+"0");//左0 
	DFS(t->rchild,key,temp+"1");//右1 
}

void get_code(node *t)//获得所有编码存放至mp中 
{
	string temp;
	char c='A';
	for(int i=0;i<26;i++)
	{
		DFS(t,c+i,temp);
		mp[c+i]=code;
		temp.clear();
		code.clear();
	}
	DFS(t,' ',temp);
	mp[' ']=code;
	temp.clear();
	code.clear();
}

void print_code()//输出所有编码 
{
	for(int i=0;i<26;i++)
	{
		cout<<(char)('A'+i)<<"的编码："<<mp['A'+i]<<endl;
	}
	cout<<"空格的编码："<<mp[' ']<<endl;
}

int main()
{
	init();
	node *t=NULL;
	build(t);
	get_code(t);
	print_code();
	char mima[20];
	printf("输入要加密的译文：\n");
	gets(mima);
	for(int i=0;i<strlen(mima);i++)
	{
		cout<<mp[mima[i]]<<" ";
	}
	return 0;
}
