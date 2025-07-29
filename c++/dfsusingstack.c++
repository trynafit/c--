#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void dfs(vector<bool> & visited , vector<vector<int>> & graph , int start){
    stack<int> st;
    visited[start]= true;
    cout<<"node "<<start<<"is visited"<<endl;
    for(auto i : graph[start]){
        st.push(i);
    }
    while(!st.empty()){
        int node = st.top();
        st.pop();
        if(visited[node]==false){
            for(auto i : graph[node]){
                if(visited[i]==false)
                st.push(i);
        }
        visited[node]=true;
        cout<<"node "<<node<<" is visted"<<endl;
    }
}}
void addEdge(vector<vector<int>> &adj,int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);  // undirected graph
    }
int main(){
    vector<vector<int>> graph(10);
    vector<bool> visited(10,false);
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
    addEdge(graph, 4, 6);
    dfs(visited , graph , 0);
    
    
    
}