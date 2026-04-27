#include<iostream>
#include<vector>
using namespace std;
int fun1(vector<int> &v1){
    int fresult = 0;
    int size = v1.size();
    for(int i = 0; i<size; i++){
         int result = v1[i];
        //left histogram
        for(int j = i-1; j>=0;j--){
            if(v1[j]>=v1[i]){
                result+=v1[i];}
                else{
                    break;
                }
        }
        //right histogram
         for(int j = i+1; j<size;j++){
            if(v1[j]>=v1[i]){
                result+=v1[i];}
                else
                break;
        }
        if(result>fresult){
            fresult=result;
        }
    }
    return fresult;
}
int main(){
    vector<int> vec1 = {60, 20, 50, 40, 10, 50, 60 };
    cout<<fun1(vec1);
}