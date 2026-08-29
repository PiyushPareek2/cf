#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n,m;
    cin >> n >> m;
    int ts=0,mn=1e9,neg=0;
    for(int i=0;i<n*m;i++){
        int x;
        cin >> x;
        if(x<0)neg++;
        ts+=abs(x);
        mn=min(mn,abs(x));
    }
    if(neg%2!=0)ts-=2*mn;
   
    cout <<ts<< endl;
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