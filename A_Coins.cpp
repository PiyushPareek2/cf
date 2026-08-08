#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    int k;
    cin >> k;
    if(n%2==0)cout<<"YES";
    else if(k%2 && n>=k)cout<<"YES";
    else cout<<"NO";
    cout<<endl;
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