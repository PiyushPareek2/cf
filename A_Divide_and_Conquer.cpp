#include <bits/stdc++.h>
using namespace std;

#define int long long
// if we can't divide we can't conquer
void solve(){
    int x;
    cin >> x;
    int y;
    cin>> y;


    if(x%y==0)cout<<"YES"<<endl;
    else
   
    cout <<"NO"<< endl;
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