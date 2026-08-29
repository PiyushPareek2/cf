#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int x,y,k;
    cin >> x >> y >> k;
    int op=0,cur=1,req=k+k*y;
    if(cur>=req){
        cout<<k<<endl;
        return;
    }
    op= (req+x-3)/(x-1)  ;

    cout << op+k << endl;
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