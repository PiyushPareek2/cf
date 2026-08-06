#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int a,b,c;
    cin>> a>> b>> c;
    a=a+(c+1)/2;
    b=b+ c/2;
    if(a>b)cout<<"First";
    else cout<<"Second";
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