#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n,a,b;
    cin >> n >> a >> b;
    if(n-a-b>1 || (a==b && a==n))cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
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