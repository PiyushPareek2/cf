#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    unordered_map<int,int> mp;
    int f=0;
    for(int i=0;i<n;i++){
        int c;
        cin >> c;
        mp[c]++;
        f=max(f,mp[c]);
    }
    if(f==n){
        cout<<0<<endl;
        return ;
    }
    int op=0;
    while(1){
        op+=1;
        if(2*f < n){
            op+=f;
            f=f*2;
        }
       
        else {
            op+= n-f;
            break;
        }
        
    }
    cout<<op<<endl;
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