#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    int a=0,b=0;
    for(int i=0;i<n;i++){
        int x;
        cin>> x;
        if(x==1)b++;
        else a++;
    }
    int op=0;
    if(a>b){
        op+=(a-b+1)/2;
        a-=op;
        b+=op;
    }
    if(a%2)op++;
    cout<<op<<endl;
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