#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    string s="";
    cin>>s;
    int cont =0,cnt=0;
    for(char ch : s){
        if(ch=='.'){
            cnt++;
            cont++;
            if(cont==3)break;
        }
        else cont=0;
    }
    if(cont==3){
        cout<<2<<endl;
    }
    else cout<<cnt<<endl;
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