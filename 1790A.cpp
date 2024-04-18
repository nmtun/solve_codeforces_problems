#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n; cin>>n;
    string pi = "314159265358979323846264338327";
    string a;
    while (n--)
    {
        cin>>a;
        int i=0;
        for ( ; i < a.length(); i++)
        {
            if (a[i] != pi[i])
            {
                // cout<<0<<endl;
                break;
            }
        }
        cout<<i<<endl;
    }
    return 0;
}