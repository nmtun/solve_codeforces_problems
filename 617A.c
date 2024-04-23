#include <stdio.h>

int x;
int main () {
    //nhap vi tri x 
    scanf("%d",&x);
    if (x%5==0) {
        printf("%d",x/5);
    }
    else {
        printf("%d",x/5 + 1);
    }
}