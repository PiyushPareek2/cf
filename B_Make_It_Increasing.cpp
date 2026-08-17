#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    int ans=0;
    for(int i=n-2;i>=0;i--){
         if(a[i] < i ){
            cout<<-1<<endl;
            return ;
        }
        if(a[i]<a[i+1])continue;
        int b1=ceil(log2(a[i])),b2=ceil(log2(a[i+1]));
        int op=b1-b2;
        a[i]=a[i]>>(b1-b2);
        if(a[i]>=a[i+1]){
            a[i]>>=1;
            op++;
        }
        ans+=op;

        if(a[i] < i ){
            cout<<-1<<endl;
            return ;
        }
    }
    if(ans<0)ans=-1;
    cout<<ans<<endl;
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