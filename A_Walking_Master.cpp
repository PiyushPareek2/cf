#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int x,y,a,b;
    cin >> x >> y >> a >> b;
    int op= b-y;
    a=a-op;
    if(op<0 || x<a){cout<<-1<<endl; return;}
    cout<<op+x-a<<endl;
    return;
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