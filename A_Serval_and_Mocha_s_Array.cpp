#include <bits/stdc++.h>
using namespace std;

#define int long long
int gcd(int a, int b){
    while(a && b){
        if(a> b)a=a%b;
        else b=b%a;
    }
    return a?a:b;
}
void solve(){
    int n;
    cin >> n;
     vector<int> a(n);
    for(auto &x : a) cin >> x;
    bool isbeautiful=false;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(gcd(a[i],a[j])<=2){
                cout<<"Yes"<<endl;
                return;
            }
        }
    }
  
   
    cout<<"No"<<endl;
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
