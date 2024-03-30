#include<iostream>
using namespace std;
int main(){
    int a = 0;
    int d = 0;
    int arr[] = {2,6,8,2,3,4,7,5,3};
    int size  = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<size-1;i++){
       
       d =  arr[i]+arr[i+1];
       if(d>a){
        a = d;
       
       }
    }
    for(int i = 0 ; i<size-1;i++){
       d =  arr[i]+arr[i+1];
       if(d==a){
      cout<<"the numbers with highest sum is "<<arr[i]<<" and "<<arr[i+1];
      cout<<" and there sum is - "<<a<<endl;
      return 0;

       }
    }
    cerr<<"an error occoured";
}
