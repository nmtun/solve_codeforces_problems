#include <stdio.h>
int i,k,n,w,s;
int main () {
    //Nhap k,n,w tuong ung la so tien` cho 1 qua chuoi, so tien anh ta co, so qua chuoi muon mua
    scanf("%d%d%d",&k,&n,&w);
    s = 0;
    for(int i=1;i<=w;i++) {  
        s = s + i*k;
    }
    if (s>=n) {
        printf("%d", s-n);
    }
    else {
        printf("0");
    }
}
