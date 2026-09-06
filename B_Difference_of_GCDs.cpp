#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n , l, r;
    cin >> n >> l >> r;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        int prev=ceil((1.0*l)/(i+1));
        int nxt=((1.0*r)/(i+1));
        if(prev>nxt){
            cout<<"NO"<<endl;
            return ;
        }
        a[i]=(i+1)*prev;
    }
    cout <<"YES"<< endl;
    for(int i: a){
        cout<<i<<" ";
    }
    cout<<endl;
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