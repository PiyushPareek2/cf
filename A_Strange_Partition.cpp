#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n,x;
    cin >> n >> x;
    int mxb=0,mnb=0;
    for(int i=0;i<n;i++){
        int val ;
        cin >> val;
        mxb+=val;
        mnb+= ceil((1.0*val)/x);
    }
    mxb= ceil((1.0*mxb)/x);
    cout<<mxb<<" "<<mnb<<endl;
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