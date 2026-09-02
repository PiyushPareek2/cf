#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
void solve(){
    int n,x;
    cin >> n >>x;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
     vector<int> b(n);
    for(auto &x : b) cin >> x;
     vector<int> c(n);
    for(auto &x : c) cin >> x;
    int k=0;
    for(int i : a){
        if((x|i) == x){
            k=k|i;
        }
        else break;
         if(k==x)break;
    }
     for(int i : b){
        if((x|i) == x){
            k=k|i;
        }
        else break;
         if(k==x)break;
    }
     for(int i : a){
        if((x|i) == x){
            k=k|i;
        }
        else break;
         if(k==x)break;

    }
    if(k==x)
    cout <<"Yes"<< endl;
    else cout<<"No"<<endl;
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