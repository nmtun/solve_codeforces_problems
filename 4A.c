#include <stdio.h> 
int a,c;
int main () {
    // nhap can nang qua dua hau cua ban
    scanf("%d",&a);
    c =  a % 2;
    if (c==0) {
        printf("Co");
    }
    else {
        printf("Khong");
    }
}