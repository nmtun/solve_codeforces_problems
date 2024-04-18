#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string s = "codeforces";
    int n; cin>>n;
    char a;
    int check=0;
    while (n--)
    {
        cin>>a;
        for (int i = 0; i <= 9; i++)
        {
        char c=s[i];
        if (a==c) check=1;     
        }   

        if(check == 0) cout << "NO" << endl;
        else {
            cout << "YES" << endl ;
            check = 0;
        }
        // cout<<check<<endl;

        // if (check=0) cout<<"NO"<<endl;
        // else cout<<"YES"<< endl;                
    }
}