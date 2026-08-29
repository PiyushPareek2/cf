#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int a,b;
    cin >> a >> b;
    int op=0;
    if(a>b)swap(a,b);
    {
        if(b%a){
            cout<<-1<<endl;
            return;
        }
      int by2=ceil(log2((1.0*b)/a));
      if(a*(1ll<<by2)!=b){
        cout<<-1<<endl;
        return;
      }
      op+= by2/3;
      by2=by2%3;
      if(by2)op+=1;
        
    }
   
    cout <<op<< endl;
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