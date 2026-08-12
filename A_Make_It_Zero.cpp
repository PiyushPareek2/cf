#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[i]=x;
    }
    if(n%2==0){ cout<<2<<endl<<1<<" "<<n<<endl<<1<<" "<<n<<endl; return ;}
    cout<<4<<endl<<1<<" "<<2<<endl<<1<<' '<<2<<endl<<2<<" "<<n<<endl<<2<<' '<<n<<endl;   
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