#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    vector<int> b(n);
    for(auto &x : b) cin >> x;
    int mpa[2*n+1]={0};
    int mpb[2*n+1]={0};
    int prev=a[0],cnt=0;
    for(int i: a){
        if(prev==i)cnt++;
        else{
            mpa[prev]=max(mpa[prev],cnt);
            cnt=1;
            prev=i;
        }
    }
    mpa[prev]=max(mpa[prev],cnt);
    prev=b[0];
    cnt=0;
     for(int i: b){
        if(prev==i)cnt++;
        else{
            mpb[prev]=max(mpb[prev],cnt);
            cnt=1;
            prev=i;
        }
    }
      mpb[prev]=max(mpb[prev],cnt);
    int ans=1;
    for(int i=1;i<=2*n;i++)ans=max(ans,mpa[i]+mpb[i]);
    cout<<ans<<endl;
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