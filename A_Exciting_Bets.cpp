#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
  int a , b;
  cin >> a >> b;
  if(a>b) swap(a,b);
  if(a==b){
    cout<<0<<" "<<0<<endl;
    return;
  }
  int mx=b-a;
  int op=a%(mx);
  op=min(op,mx-op);
   cout<<mx<<" "<<op<<endl;
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