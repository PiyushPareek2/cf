#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int w, h;
    cin >> w >> h;
    int p;
    cin >> p;
    vector<int> y0(p);
    for(auto& x : y0)cin >> x;
    cin >> p;
    vector<int> yh(p);
    for(auto& x : yh)cin >> x;
    cin >> p;
    vector<int> x0(p);
    for(auto& x : x0)cin >> x;
    cin >> p;
    vector<int> xw(p);
    for(auto& x : xw)cin >> x;
    sort(y0.begin(),y0.end());
    sort(yh.begin(),yh.end());
    sort(x0.begin(),x0.end());
    sort(xw.begin(),xw.end());
    int l=y0[0],r=y0.back(),ans=0;
    ans=(r-l)*h;
    l=yh[0],r=yh.back();
    ans=max(ans,(r-l)*h);
     l=x0[0],r=x0.back();
    ans=max(ans,(r-l)*w);
     l=xw[0],r=xw.back();
    ans=max(ans,(r-l)*w);
    cout<<ans<<"\n";
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