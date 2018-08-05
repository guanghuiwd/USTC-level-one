//约瑟夫环问题 

#include <stdio.h>
#define N 17
#define M 11              

int  main()
{
    
    int a[N], i, call_n = 0, out_n = 0;
    for (i = 0; i < N; i++)  a[i] = 0;
    
    i = 0;
    
    while (1)  {
        
        if(a[i] == 0)  {
            
            if (out_n == (N - 1))  break;
            
            call_n++;
            
            call_n %= M;
            
            if(call_n == 0) {
                
                a[i] = 1;
                
                out_n++;
                
                printf("%d  ", i + 1);
                
            }
            
        }
        
        i++;   i %= N;     
        
    }
    
    printf("%d\n", i + 1);
    printf("此为出列顺序。"); 
}
