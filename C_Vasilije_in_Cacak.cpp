#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n,k,x;
    cin >> n >> k >> x;
    int sk= (k*(2*n-k+1))/2;
    int minsk=(k*(k+1))/2;
    if(sk<x||k>n||minsk>x ){cout<<"NO"<<endl; return ;}
  
    cout<<"YES"<<endl; 
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