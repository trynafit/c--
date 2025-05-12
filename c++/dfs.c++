#include<iostream>
#include<vector>
using namespace std;
void dfs(vector<bool> test,int node ,vector<vector<int>> adj){
    test[node] = true;
    cout<< " node "<<node<<" is visited"<<endl;
    for(int i : adj[node]){
        if(test[i]==false){
            dfs(test , i , adj);
        }
    }
}
int main(){
    vector<vector<int>> adj(5);
    vector<bool> test(7 , false);
     adj[0].push_back(1);
    adj[1].push_back(0);

    adj[0].push_back(2);
    adj[2].push_back(0);

    adj[1].push_back(3);
    adj[3].push_back(1);

    adj[1].push_back(4);
    adj[4].push_back(1);

    dfs(test , 0 , adj);
    
}