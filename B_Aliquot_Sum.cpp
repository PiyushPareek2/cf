#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int mx=1;
    for(auto &x : a) {cin >> x;mx=max(mx,x);}
    
    vector<int> ali(mx+1,0);
    for(int i=1;i<=mx;i++){
        for(int j=2*i;j<=mx;j+=i){
            ali[j]+=i;
        }
    }
    for(int x: a){
        if(x==ali[x])cout<<"perfect"<<endl;
        else if(x<ali[x])cout<<"abundant"<<endl;
        else cout<<"deficient"<<endl;
    }
    return;
    
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     solve();

    
    return 0;
}