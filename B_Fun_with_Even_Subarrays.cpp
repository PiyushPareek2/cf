#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
   
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    for(int test=1;test<=t;test++){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto& x : a)cin >> x;
    int i=n-1,cnt=0,val=a[n-1],op=0;
    while(i>=0){
        if(a[i]==val){
            cnt++;
            i--;
        
        }
        else{
            op++;
            i-=cnt;
            cnt*=2;
        }
    }
    
    cout <<op<< endl;
    }
    
    return 0;
}