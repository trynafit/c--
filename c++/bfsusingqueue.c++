#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void bfs(vector<vector<int>> &graph , vector<bool> &visited , int start){
    queue<int> q;
    q.push(start);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        if(!visited[node]){
            cout<<"node "<<node<<" is visited"<<endl;
        }
        visited[node] = true;
        for(int i : graph[node]){
            if(visited[i]==false){
                q.push(i)
            } }}}
            void addEdge(vector<vector<int>> &graph , int u , int v){
                graph[u].push_back(v);
                graph[v].push_back(u);
            }
         int main(){
             int n = 10; // 10 nodes (0 to 9)
    vector<vector<int>> graph(n);
    vector<bool> visited(n, false);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 5);
    addEdge(graph, 2, 6);
    addEdge(graph, 3, 7);
    addEdge(graph, 4, 7);
    addEdge(graph, 5, 8);
    addEdge(graph, 6, 9);
    addEdge(graph, 8, 9);
    addEdge(graph, 7, 8);
    addEdge(graph, 3, 5); // extra cross-link
    addEdge(graph, 4, 6); // extra cross-link
    bfs(graph , visited , 0);
         }
            
            
            
            
            
            
            
            
            
            