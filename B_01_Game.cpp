#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    string n;
    cin >> n;
    int zero=0,one=0;
    for(char reminder : n){
        
        if(reminder=='1')one++;
        else zero++;
    }
    int pairs=min(zero,one);
    if(pairs%2){
        cout<<"DA"<<endl;
    }
    else{
        cout<<"NET"<<endl;
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