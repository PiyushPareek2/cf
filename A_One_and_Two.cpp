#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n,cnt=0;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) {cin >> x; if(x==2)cnt++;}
    if(cnt&1)cout<<-1<<endl;
    else{
        int no=cnt/2;
        for(int i=0;i<n;i++){
            if(a[i]==2)no--;
            if(no==0){
                cout<<i+1<<endl;
                break;
            }
        }
    }
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