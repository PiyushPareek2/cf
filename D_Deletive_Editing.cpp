#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
   
    string s="";
    string p="";
    cin >> s;
    cin >> p;
    int ns=s.size(),np=p.size();
    if(ns<np){
        cout<<"NO"<<endl;
        return;
    }
    else if(s==p){
        cout<<"YES"<<endl;
        return;
    }
    
    vector<int> los(ns,-1),lop(np,-1);
    vector<int> mp(27,0);
    for(int i=ns-1;i>=0;i--){
        los[i]=mp[s[i]-'A']+1;
        mp[s[i]-'A']++;
    }
     vector<int>m (27,0);
    for(int i=np-1;i>=0;i--){
        lop[i]=m[p[i]-'A']+1;
        m[p[i]-'A']++;
    }
    int p1=ns-1,p2=np-1;
    while(p2>=0 && p1>=0){
        if(s[p1]!=p[p2]){
            p1--;
            continue;
        }
        if(los[p1]!=lop[p2]){
        cout<<"NO"<<endl;
        return;
        }
        else{
         p1--;
         p2--;
        }
    }
    if(p2==-1){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    return;
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