#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
   int x , n;
   cin >> x >> n;
   if(x%2 == 0){
    int k= (n/4)*4;
    for(int i=0;i<n-k;i++){
        if(i==0 || i==3)x-=k+i+1;
        else x+=k+i+1;
    }
    cout<<x<<"\n";
   }
   else{
     int k= (n/4)*4;
    for(int i=0;i<n-k;i++){
        if(i==0 || i==3)x+=k+i+1;
        else x-=k+i+1;
    }
    cout<<x<<"\n";
    
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