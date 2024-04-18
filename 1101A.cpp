#include <bits/stdc++.h>
using namespace std;
int main(){

  int n;
  cin >>n;

  while(n--) 
  {
    int a , b , d;
    cin >> a >> b >> d;

    if(a != d && a/d >=1) 
    {
      cout  << d <<endl;
    } 
    else 
    {
        int k = b/d;
        cout << (k+1)*d <<endl;
    }
  }

  return 0;
}
// https://cyclocoder.blogspot.com/2019/01/codeforces-1101a-solution-and.html