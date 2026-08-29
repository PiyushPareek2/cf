#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    string a;
    cin >> a;
    for(int i=0;i<n-1;i++){
       if(a[i]>a[i+1]){
        cout<<"YES"<<endl<<i+1<<" "<<i+2<<endl;
        return ;
       }
    }
    cout <<"NO"<< endl;
    return;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   
        solve();
    
    
    return 0;
}