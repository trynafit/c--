#include<iostream>
using namespace std;
int digit(int num , int arr[] , int size){
    int count = 0;
    for(int i =0;i<size;i++){
        if((num & arr[i]) == num){
            count++;
        }
    }
    return count;
}
int maxand(int arr[] , int size){
    int res = 0 , count ;
    for(int bit =31;bit>=0;bit--){
        count=digit(res|(1<<bit) , arr, size);
        if(count>=2){
            res = res|(1<<bit);
        }
    }
    return res;
}
int main(){
    int arr[] = {12,34,5677,889,90,98765,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<maxand(arr , size);
}