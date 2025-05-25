#include<iostream>
#include<vector>
using namespace std;
bool dfs(int node , int parent , vector<vector<int>>& graph ,vector<bool> &visited){
    visited[node] = true;
    for(int i : graph[node]){
        if(!visited[i]){
            if(dfs(i , node , graph , visited)){
                return true;
            }
        }
        else{
            if(parent!=i){
                return true;
            }
        }
    }
    return false;
}
bool checkforcycle( vector<vector<int>> &graph , int size){
    vector<bool> visited (size , false);
    for(int i = 0 ; i<size;i++){
        if(!visited[i]){
           if(dfs(i , -1 , graph , visited)){
                return true;
            }}
    }
    return false;
}
int main(){
     vector<vector<int>> graph(4);

    // Undirected edges
    graph[0].push_back(1);
    graph[1].push_back(0);

    graph[0].push_back(2);
    graph[2].push_back(0);

    graph[1].push_back(2);
    graph[2].push_back(1);

    graph[2].push_back(3);
    graph[3].push_back(2);

    cout << (checkforcycle( graph , 4) ? "Cycle Found" : "No Cycle") << endl;
    return 0;

}