#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    int l=0,t=1;
    while(t<=n-1){l=t; t<<=1;}
    for(int i= n-1;i>=l;i--){
        cout<<i<<" ";
    }
    for(int i=0;i<l;i++)cout<<i<<" ";
   
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