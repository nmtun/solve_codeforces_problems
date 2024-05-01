#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n; cin>>n;
    while (n--)
    {
        int x,y;
        cin>>x>>y;
        if (x==1 && y!=1)
        {
            cout<<y*y<<endl;
        }
        else if (x!=1 && y==1)
        {
            cout<<1<<endl;
        }
        else if (y%x==0)
        {
            cout<<x*(y/x)*(y/x)<<endl;
        }
        else
        {
            int a=y/x;
            int b=y-a*x;
            int kq=b*(a+1)*(a+1) + (x-b)*a*a;
            cout<<kq<<endl;

        }
        
    }
    
}