#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){


// adjency list adj[i]=[a,b,c,d] these are all neighbours of  i node
vector<vector<int>> edges;
// adj more useful than edges in question
int n=10; //no of nodes;
vector<vector<int>> adj(n+1); 
for(auto& p: edges){
    int u=p[0],v=p[1];
    

    adj[u].push_back(v);
    adj[v].push_back(u); // remove for directed graph
}


// agar edges me weight(distance btween nodes) bhi given ho
vector<vector<pair<int,int>>> adj(n+1);

for(auto& p: edges){
    int u=p[0],v=p[1],w=p[2];

    adj[u].push_back({v,w});
    adj[v].push_back({u,w});
}
//traverse karte time par  adj[node] iske har element ka .first neighbour node and .second distance between


//dfs
void dfs(vector<vector<int>>& grid, int i, int j, 
         vector<vector<bool>>& visited,
         int dx[], int dy[]) {
    
    visited[i][j] = true;
    
    
    for (int d = 0; d < 4; d++) {  // change 4→8 for 8-directional
        int ni = i + dx[d];
        int nj = j + dy[d];
        
        if (ni >= 0 && ni < n && nj >= 0 && nj < m 
            && !visited[ni][nj] 
            /* && grid[ni][nj] == some_condition */) {
            dfs(grid, ni, nj, visited, dx, dy);
        }
    }
}
//disconnected graph ha to ye karenge
for(int i=1;i<=n;i++){
    if(!vis[i]){
        dfs(i);
    }
}










}