#include<bits/stdc++.h>
using namespace std;
int mod=1e9 +7; //larger mod value lower chances of collision but overflow chances increase so choose accordingly
class rollinghash{
   public:
   vector<long long> dp; 
   long long p=31 ;//prime greater than charcter set overall not as per string
   long long roling_hash(string& s){
    long long power=1;
    long long hash_value=0;
    int n=s.size();
    dp.assign(n,-1);
     for(int i=0;i<s.size();i++){
        hash_value=(hash_value + power*(s[i]-'a'+1))%mod;
        dp[i]=hash_value;
        power=(power*p)%mod;
     }
     return hash_value;
}
    long long substrH(int i,int j){
         if(i==0)return dp[0];
         
    }
};