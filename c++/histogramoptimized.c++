#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int fun1(vector<int> &v1){
    int size = v1.size();
    int result = 0;
    stack<int> stk;
    for(int i = 0;i<size;i++){
        int area;
        while(!stk.empty() && v1[stk.top()]>=v1[i]){
            int tp = stk.top();
            stk.pop();
area = v1[tp] * (stk.empty() ? i : i - stk.top() - 1);
             result = max(result , area);
        }
        
        stk.push(i);
    }
    while(!stk.empty()){
        int area;
    int tp = stk.top();
    stk.pop();
area = v1[tp] * (stk.empty() ? size: size - stk.top() - 1);
     result = max(result , area);
    }
    return result;
}
int main(){
    vector<int> v1 = {60, 20, 50, 40, 10, 50, 60};
    cout<<fun1(v1);
}