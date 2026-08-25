#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
   string n;
   cin >> n;
   int op=0,o=0,z=0;
   for(char ch : n){
    if(ch=='0')z++;
    else o++;
   }
   if(o!=z)
   for(int i=0;i<n.size();i++){
    char ch=n[i];
    if(ch=='0'){
        if(o)o--;
        else{
            op=n.size()-i;
            break;
        }
    }
    else{
        if(z)z--;
        else{
            op=n.size()-i;
            break;
        }
    }
   }
    
   cout << op << endl;
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