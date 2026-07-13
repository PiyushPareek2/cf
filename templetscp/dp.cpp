/**1. 0/1 Knapsack (Most Important)

Used for:

Subset Sum
Partition Equal Subset Sum
Last Stone Weight II
Target Sum
Count Subsets



Variants:

Boolean
Maximum value
Minimum value
Counting ways
**/
for (int x : nums)
    for (int j = W; j >= x; j--)
        dp[j] = transition(dp[j], dp[j - x]);

// ye merawala ha
  vector<bool> dp(sum+1,false);
       dp[0]=true;
       for(int i=0;i<n;i++){
         vector<bool> nxt=dp;
         for(int j=0;j<=sum;j++){
            nxt[j]=dp[j] || ((j-stones[i] >=0) && dp[j-stones[i]]);
         }
         dp=nxt;
       }