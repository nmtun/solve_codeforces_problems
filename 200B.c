#include <stdio.h>

int n,p;
float sum=0;
int main () {
    //Nhap n loai do uong 
    //p la & nuoc cam trong do uong tuong ung 
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        scanf("%d",&p);     //nhap %, cach nhau boi 1 dau space
        sum+=p;  
    }

    printf("%f",sum/n);

}