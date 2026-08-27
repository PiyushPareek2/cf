#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
 int a,b;
 cin >> a >> b;
 int xr=0;
 int n=a-1;
 if(n%4==0)xr=n;
 else if(n%4==1)xr=1;
 else if(n%4==2)xr=n+1;
 else xr=0;
 if(xr==b)cout<<a;
 else if((xr^b)!=a)cout<<a+1;
 else cout<<a+2;
 cout<<endl;
 return ;   
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}