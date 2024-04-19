#include <iostream>
using namespace std;

int main ()
{
    int k,l,dem=-1;
    cin>>k>>l;
    while (l%k==0)
    {
        l/=k;
        dem += 1;
    }
    if (dem >= 0 && l==1)
    {
        cout<<"YES"<<endl<<dem<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}
