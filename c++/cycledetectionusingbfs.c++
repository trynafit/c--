#include<iostream>
#include<queue>
#include<vector>
using namespace std; 
bool bfs(int node , int parent , vector<vector<int>> &graph , vector<bool> &visited){
    visited[node] = true;
    queue<pair<int, int>> q; 
    q.push({node , -1});
    while(!q.empty()){
        int node2 = q.front().first;
        int parent = q.front().second;
        q.pop();
        for(int i : graph[node2]){
            if(!visited[i]){
                visited[i] = true;
                q.push({i,node2});
            }
            else{
                if(parent != i ){
                    return true;
                }
            }
        }
}
    return false;
}
bool checkforcycle(vector<vector<int>> &graph , int size){
    vector<bool> visited(size , false);
    for(int i =0 ;i<size;i++){
        if(!visited[i]){
            if(bfs(i , -1 , graph , visited)){
                return true;
            }
        }
    }
    return false;
}
int main(){
     vector<vector<int>> graph(4);

    // Sample undirected graph
    graph[0].push_back(1);
    graph[1].push_back(0);

    graph[0].push_back(2);
    graph[2].push_back(0);
    cout << (checkforcycle(graph, 4) ? "Cycle Found" : "No Cycle") << endl;

    return 0;
}

