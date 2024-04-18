#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    int x, y;
    for( int i=1;i<=t;i++)
    {
    	cin>> x >> y;
    	if(x>=y) cout<< "YES"<<endl;
    	else
        {
    		if( x==1 || x==3 || x==2 && y!= 3) cout<< "NO"<<endl;
    		else if( x==2 || y==3) cout<< "YES"<<endl;
    		else cout<< "YES"<<endl;
		}
    }
    return 0;
}