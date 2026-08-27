#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int l=0,r=k-1,b=0;
        for(int i=0;i<k;i++){
            if(s[i]=='B')b++;
        }
        int ans=k-b;
        r++;
        while(r<n){
            if(s[l++]=='B')b--;
            if(s[r++]=='B')b++;
            ans=min(ans,k-b);
        }
        cout<<ans<<endl;
        
    }
    return 0;
}