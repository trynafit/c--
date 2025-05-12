#include<iostream>
#include<vector>
using namespace std;
void print(int node , vector<bool> &k,vector<vector<int>> & adj){
    if(k[node]==false){
        cout<<"visited : "<<node<<endl;
        k[node]=true;
    }
    for(int i : adj[node]){
        if(k[i] == false){
            cout<<" visited : "<<i<<endl;
            k[i] = true;
            }}
            }
void bfs(int node , vector<bool> &k,vector<vector<int>>&adj , vector<bool> &power){
    power[node] = true;
    print(node , k , adj);
    for(int i : adj[node]){
        if(power[i]==false)
        bfs(i , k , adj , power);
    }
    }
     


void addedge(int u , int v , vector<vector<int>> &adj){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

 int main(){
      vector<vector<int>> adj(10);
    vector<bool> test(10 , false);
     vector<bool> power(10 , false);
      addedge(0, 1, adj);
addedge(0, 2, adj);
addedge(0, 3, adj);
addedge(2, 4, adj);

    bfs(0, test , adj , power);
 }