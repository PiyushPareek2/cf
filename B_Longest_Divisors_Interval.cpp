#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    int cnt=0;
    for(int i=1;i<=100;i++){
        if(n%i){
            cout<<cnt<<endl;
            return ;
        }
        else cnt++;
    }
   
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