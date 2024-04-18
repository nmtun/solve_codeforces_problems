#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long int a,b,x,y;
    cin>>a>>b>>x>>y;
    long long int ucln;
    ucln = gcd(x,y);
    x /= ucln;
    y /= ucln;
    long long int min;
    if ((a/x)>=(b/y))
    {
        min = b/y;
        cout<<min<<endl;
    }
    else 
    {
        min = a/x;
        cout<<min<<endl;
    }

    return 0;
}