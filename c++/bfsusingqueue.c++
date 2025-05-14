#include<iostream>
#include <vector>
#include<queue>
using namespace std;
class bfs{
    public:
    bfs(vector<vector<int>> &graph ,vector<bool> v1 , int top){
        queue<int> q1;
        q1.push(top);
        v1[top] = true;
        while(!q1.empty()){
            int front = q1.front();
                cout<<"visited : "<<front<<endl;
                q1.pop();
            for(int i : graph[front]){
                if(v1[i] == false){
                    q1.push(i);
                    v1[i] = true;
                }
                
            }
        }
    }
};
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
    bfs ob1(adj , test ,0);
}