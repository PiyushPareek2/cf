#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n, k;
    cin >> n >>k;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
     int op=1e9;
    if(k!=4){
     for(int i=0;i<n;i++){
        op=min(op,(k-(a[i]%k))%k);
     }
      cout <<op<< endl;
      return;
    }
   int two=0,one=0;
    for(int i=0;i<n;i++){
        if(a[i]%k==0)op=0;
        else if(a[i]%k==1){op=min(op,3ll); one++;}
        else if(a[i]%k==2){op=min(op,2ll); two++;}
        else op=min(op,1ll);
    }
    if(two>=2)op=0;
    if(one>=1){
        if(two)op=min(op,1ll);
        else if(one>=2)op=min(op,2ll);
    }

    cout <<op<< endl;
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