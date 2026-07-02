#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    string s;
    cin >>s;
    int cnt=0;
    char prev=' ';
    for(char i: s){
        if(i != prev) cnt++;
        prev=i;
    }
    if(cnt==2)cout<<2<<endl;
    else cout<<1<<endl;
   
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