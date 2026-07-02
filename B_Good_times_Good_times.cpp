#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<int> good(1e8 +1,0);
bool isgood(int i){
    unordered_map<int,int>m;
    while(i){
        int d=i%10;
        i/=10;
        m[d]++;
        if(m.size()>2)return false;
    }
    return true;
}
void precompute(){
    for(int i=2;i<=1e8;i++){
        if(isgood(i))good[i]=1;
    }
}

void solve(){
    int x;
    cin >>x ;
    for(int i=2;i<=1e9;i++){
        if(isgood(i) && isgood(i*x)) {
            cout<<i<<endl;
            break;
        }
    }
    
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