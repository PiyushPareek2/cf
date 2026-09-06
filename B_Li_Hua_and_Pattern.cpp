#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n,k;
    cin >> n >> k;
    vector<vector<int>> a(n,vector<int>(n));
    int x;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
         cin >> x;
         a[i][j]=x;
        }
    }
    if(n==1){cout<<"YES"<<endl;return;}
      for(int i=0;i<(n+1)/2;i++){
        for(int j=0;j<n;j++){
         if(a[i][j]!=a[n-1-i][n-1-j])k--;
         if(n%2 && j==(n)/2 && i==j)break;
        }
    }
    if(k<0){
          cout <<"NO"<< endl;
          return;
    }
    if(!k || (n%2)==1|| k%2==0){
        cout<<"YES"<<endl;
        return ;
    }
    cout <<"NO"<< endl;
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