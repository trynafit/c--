#include<iostream>
#include<vector>
using namespace std;
bool check(vector<int> &arr , int k ,int pagelimit){
    int cnt =1;
    int pagesum = 0;
    for(int i = 0; i<arr.size();i++){
        if(arr[i] + pagesum > pagelimit){
            cnt++;
            pagesum = arr[i];
        }
        else{
            pagesum += arr[i];
        }
    }
    return  (cnt==k);
}
int findpages(vector<int> &arr , int k){
    if(k>arr.size()){
        return -1;
    }
    else{
        int min = arr[0];
for(int i = 1; i < arr.size(); i++) {
    if(arr[i] > min) {
        min = arr[i];
    }
}

        int max = 0;
for(int i = 0; i < arr.size(); i++) {
    max += arr[i];
}

        
        for(int i = min; i<max;i++){
            if(check(arr , k , i)){
                return i;
            }
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {12, 34, 67, 90};
    int k = 2;
    cout<<findpages(arr , k);
}