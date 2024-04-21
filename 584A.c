#include <stdio.h>

int n,t;
int main () {
    scanf("%d%d",&n,&t);
    if (t==10)
    {
        if (n==1)
        {
            printf("%d",-1);
        }
        else
        {
            printf("%d",1);
            for (int i = 0; i < n-1; i++)
            {
                printf("%d",0);
            }
            
        }
    }
    else
    {
        printf("%d",t);
        for (int i = 0; i < n-1; i++)
        {
            printf("%d",0);
        }
        
    }

}