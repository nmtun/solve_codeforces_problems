#include <stdio.h>

long long int n,m,a,x,y;
int main () {
    scanf("%lld%lld%lld",&n,&m,&a);
    if (n%a==0)
    {
        x = n/a;
        if (m%a==0)
        {
            printf("%lld",x*(m/a));
        }
        else 
        {
            printf("%lld",x*(m/a +1));
        }
    }
    else
    {
        x = n/a +1;
        if (m%a==0)
        {
            printf("%lld",x*(m/a));
        }
        else 
        {
            printf("%lld",x*(m/a +1));
        }
    }
    
    
    
    
    
    // scanf("%lld%lld%lld",&n,&m,&t);
    // if (n%t==0 && m%t==0)
    // {
    //     printf("%lld",(n/t)*(m/t));
    // }
    // else if (n%t==0 && m%t!=0)
    // {
    //     printf("%lld",(n/t)*(m/t +1));
    // }
    // else if (n%t!=0 && m%t!=0)
    // {
    //     printf("%lld",(n/t +1)*(m/t +1));
    // }
    // else 
    // {
    //     printf("%lld",(n/t +1)*(m/t +1));
    // }

}