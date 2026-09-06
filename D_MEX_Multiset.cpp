#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    int z=0;
    vector<int> a(n);
    for(auto &x : a) {cin >> x; if(!x)z++;}
    if(z==0||z==n){
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            if(i%3==0)cout<<"A";
            else if(i%3==1)cout<<"B";
            else cout<<"C";
        }
        cout<<endl;
        return;
    }
    else if(z==1){
        cout<<"NO"<<endl;
        return;
    }
    else{
        int r=0;
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            
            if(a[i]>0)cout<<"C";
            else {
                if(r){
                    r=1-r;
                    cout<<"A";
                }
                else{
                    r=1-r;
                    cout<<"B";
                }
            }
           
        }
         cout<<endl;
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