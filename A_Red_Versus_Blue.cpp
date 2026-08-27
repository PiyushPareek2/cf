#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n , r , b;
    cin >> n >> r >> b;
    string ans="";
    int k=r/(b+1);
    int left=r-(b+1)*k;
    string rr="";
    for(int i=0;i<k;i++)rr.push_back('R');
    for(int i=0;i<b;i++){
        ans+=rr;
        if(left){ans+="R";left--;}
        ans+="B";
    }
    ans+=rr;
   
    cout <<ans<< endl;
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