#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    int a=n%4;
    if( a==1 || a==3 || n==2){
        cout<<-1<<endl;
        return;
    }
    int mn=LLONG_MAX;
    if(!a)mn=n/4;
    else mn= 1 + ((n-6)/4);
    int mx=LLONG_MIN;
    int b= n%6;
    if(b==1 || b==3 || b==5){
        cout<<-1<<endl;
        return;
    }
    if(!b)mx=n/6;
    else if(b==2)mx=2+ (n-8)/6;
    else mx= 1 + (n-4)/6;
    mx=min(mx,mn);
     if( !mx || !mn){
        cout<<-1<<endl;
        return;
    }
    cout<<mx<<" "<<mn<<endl;
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