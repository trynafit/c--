#include<iostream>
#include<string>
using namespace std;
void count(string num , int arr[]){
    int length = num.length();
    for(int i = 0 ; i< length; i++){
       auto temp =  num[i];
       int temp2 = arr[temp];
       arr[temp] = temp2 +1;
    }
}

int main(){
    string num = "a11jhoi2323466";
    int arr[256];
    for(int j = 0;j<256;j++){
       arr[j] = 0;
    }
    count(num , arr);
    for(int i = 48;i<58;i++){
        cout<<arr[i]<<endl;
    }
}