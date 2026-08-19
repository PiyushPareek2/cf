#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
   int a ,b ,c;
   cin >> a >> b >> c;
   if(2*b==a+c){
    cout<<"YES"<<endl;
    return ;
   }
   int ra=2*b-c, rb=c+a,rc=2*b-a;
   if(rb&1)b=0;
   else rb/=2;
   if(ra>0 && a && ra%a==0){
    cout<<"YES"<<endl;
    return ;
   }
  
   if(rb>0 && b && rb%b==0){
    cout<<"YES"<<endl;
    return ;
   }
   
   if(rc>0 && c && rc%c==0){
    cout<<"YES"<<endl;
    return ;
   }
    cout<<"NO"<<endl;
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