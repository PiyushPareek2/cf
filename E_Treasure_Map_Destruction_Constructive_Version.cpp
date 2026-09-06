#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    vector<int> b(n,0);
    int prz=-1;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            prz=i;
        }
        else if(a[i]==-1)continue;
        else{
            int pr=i-a[i];
            if(pr>=0 && a[pr]!=-1 && pr!=prz){
                cout<<-1<<endl;
                return;
            }
        }
    }
    int nxt=n;
    for(int i=n-1;i>=0;i--){
          if(a[i]==0){
            nxt=i;
        }
        else if(a[i]==-1)continue;
        else{
            int pr=i+a[i];
            if(pr<0 && pr!=nxt && a[pr]!=-1){
                cout<<-1<<endl;
                return;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==-1)continue;
        if(!a[i]){
            b[i]=1;
        }
        else{
            nxt=i+a[i];
            int p=i-a[i];
            if(nxt<n)b[nxt]=1;
            if(p>=0)b[p]=1;
        }
    }
    for(int i: b){
        cout<<i;
    }
    cout   << endl;
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