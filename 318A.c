#include <stdio.h>

long long int n,k;
int main () {
    scanf("%lld%lld",&n,&k);
    if (k <= (n+1) /2)
    {
        printf("%lld",k*2 -1);
    }
    else
    {
        printf("%lld",(k - (n+1)/2) *2);
    }
}