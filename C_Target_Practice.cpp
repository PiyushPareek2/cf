#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
   int score=0;
   for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        char ch;
        cin>>ch;
        if(ch=='X'){
            if(i==0||j==0||i==9||j==9)score+=1;
            else if(i==1||j==1||i==8||j==8)score+=2;
            else if(i==2||j==2||i==7||j==7)score+=3;
            else if(i==3||j==3||i==6||j==6)score+=4;
            else score+=5;
        }
    }
   }
   cout<<score<<endl;
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