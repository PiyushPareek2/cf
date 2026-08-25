#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    char ch;
    cin >> ch;
    string s;
    cin >> s;
    int mx=-1;
    for(int i=0;i<n;i++){
        int j=i,delay=0;
        bool iscomplete=false;
        while(s[i]==ch && s[j]!='g'){
            delay++;
            j++;
            if(j>=n){
            j=j%n;
            iscomplete=true;
        }
        }
        i=j;
        mx=max(mx,delay);
        if(iscomplete)break;
    }
    cout<<mx<<endl;
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