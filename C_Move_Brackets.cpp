#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int  n;
    cin >> n;
    string s;
    cin >> s;
    int op=0,ob=0;
    for(char ch: s){
        if(ch=='(')ob++;
        else{
            if(ob)ob--;
            else op++;
        }
      
    }
    cout <<op<< endl;
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