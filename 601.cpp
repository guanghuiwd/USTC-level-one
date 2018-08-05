//插入排序和奇偶分离 

#include <stdio.h>

int  insert(int s[]){
    int c;
    for (int i=0; i<10; i++) {
        for (int j=i; j<10; j++) {
            if (s[i]>s[j]) {
                c=s[i];
                s[i]=s[j];
                s[j]=c;
            }
        }
    }
    return 0;
}

int jiou(int s[]){
    int *p,*q,temp;
    p=&s[0];
    q=&s[9];
    while (p<q) {
        if (*p%2!=0) {
            p++;
            continue;
        }
        if (*q%2==0) {
            q--;
            continue;
        }
        temp=*p;
        *p=*q;
        *q=temp;
    }
    return 0;
}
int see(int s[])
{
    int n=sizeof(s);
    printf("序列为：");
    for (int i=0; i<n+2; i++) {
        printf ("%d ",s[i]);
    }
    return 0;
}
int main() {
    // insert code here...
    printf("请输入整形序列：");
    int s[10];
    for (int i=0; i<10; i++) {
        scanf("%d",&s[i]);
    }
    //see(s);
    insert(s);
    see(s);
    jiou(s);
    see(s);
    return 0;
}
