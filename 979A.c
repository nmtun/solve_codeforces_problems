#include <stdio.h>

long long int n;
int main () {
    scanf("%lld",&n);
    if ((n+1)==1)
    {
        printf("%lld",0);
    }
    else if ((n+1) % 2 == 0)
    {
        printf("%lld",(n+1) /2);  
    }
    else
    {
        printf("%lld",n+1);
    }
}