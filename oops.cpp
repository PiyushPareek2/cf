#include <bits/stdc++.h>
using namespace std;

class rectangle{
private:
    int width;
    int breadth;
public:
  rectangle(int width, int breadth){
  this->width=width;
  this->breadth=breadth;
}


int area(){
    return width*breadth;
}
};
class graph{
    int n;
    vector<vector<int>> adj;
    graph(int n){
        this->n=n;
        adj.resize(n+1);
    }
    void addEdges(int u,int v){
        adj[u].push_back(v); //let us consider as directed graph
    }
    
};
class counter{
  private:
  int cnt=0;
  public:
  void increament(){
    cnt+=1;}
  void decrement() {
    cnt-=1;}
  int getcnt() {return cnt;}
};
class graph{
    public:
    int node;
    vector<vector<int>> adj;
    public:
    graph(int n){
        node=n;
        adj.resize(n+1);
    }
    void addedge(int u,int v){
        adj[u].push_back(v);
    }
    vector<int> neigh(int u){
        return adj[u];
    }
};
int main(){
   graph g(5);
   g.addedge(1,4);
   g.addedge(1,3);
   g.addedge(3,5);
   g.addedge(5,1);
   vector<int> a=g.neigh(1);
   for(int i: a){
    cout<<i<<" ";
   }

    return 0;
}