#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    int sum=0,neg=0,mn=1e9;
    for(int i=0;i<n;i++){
        int x ;
        cin >> x;
        sum+=abs(x);
        if(x<0)neg++;
        mn=min(mn,abs(x));
    }
    if(neg&1){
        sum-=2*mn;
    }
    cout<<sum<<endl;
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