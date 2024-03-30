#include<iostream>
using namespace std;
int main(){
    int arr[]= {1,1,1,1,2,6,7,8,9,0};
     int size = sizeof(arr)/sizeof(arr[0]);
    int n = size / 2;
    int max_count = 0 ;
    for(int a =0 ; a<size; a++){
       max_count = 0 ;
      int b =  arr[a];
      for (int c = 0 ; c<size ;c++){
      int d = arr[c];
    while(d==b){
     max_count ++;
    break;
    };
    
    }
    if(max_count>=n){
      cout<<"there is a majority element in the array";
      return 0;
    }
    }
    cout<<"there is no majority element in the array";
    }