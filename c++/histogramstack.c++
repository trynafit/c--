#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> pse(vector<int> &v1){
    int size = v1.size();
    stack<int> st ; 
    vector<int> result(size , -1);
    for(int i = 0 ; i<size;i++){
        while(!st.empty() && v1[st.top()]>=v1[i]){
            st.pop();
        }
        if(!st.empty()){
            result[i] = st.top();
        }
        st.push(i);
    }
    return result;
    
}
vector<int> nse(vector<int> &v1){
    int size = v1.size();
    stack<int> st ; 
    vector<int> result(size , size);
    for(int i = size-1; i>=0;i--){
        while(!st.empty() && v1[st.top()]>=v1[i]){
            st.pop();
        }
        if(!st.empty()){
            result[i] = st.top();
        }
        st.push(i);
    }
    return result;
}
int fun1(vector<int> &v1){
    int fresult = 0;
    int size = v1.size();
   vector<int> previous = pse(v1);
   vector<int> next  = nse(v1);
   for(int i = 0 ; i<size; i++){
       int area = 0;
       int width = next[i] - previous[i]-1;
       area = v1[i]*width;
       if(area>fresult){
           fresult= area;
       }
   }
   return fresult;
}
int main(){
    vector<int> v1 = {60, 20, 50, 40, 10, 50, 60};
    cout<<fun1(v1);
}