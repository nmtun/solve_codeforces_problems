#include <stdio.h>

int n,a,b;
int main () {
    scanf("%d%d%d",&n,&a,&b);
    int x = a + 1;
    int y = n - b;
    if (x>y)
    {
        printf("%d",n-x+1);
    }
    else 
    {
        printf("%d",n-y+1);
    }
}