#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_set<char> ss;
    vector<int>diffchar(n);
    diffchar[0]=1;
    ss.insert(s[0]);
    for(int i=1;i<n;i++){
        if(ss.find(s[i])!=ss.end()){
            diffchar[i]=diffchar[i-1];
        }
        else {
            diffchar[i]=diffchar[i-1] +1;
            ss.insert(s[i]);
        }
    }
    int ds=1;
    for(int len=1;len<n;len++){
        ds+=diffchar[n-len];
    }
    cout <<ds<< endl;
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