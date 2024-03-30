#include<iostream>
using namespace std;
int main(){
    int j;
    int key ;
    cout <<"enter the digits you want to rotate"<<endl;
    cin>>key;
    int arr[] = {1,2,3,4,5,6,7,8};
   
    
    int a = sizeof(arr)/sizeof(arr[0]);
     
    for(int j  = 0 ; j<a ;j++){
        cout<<arr[j]<<"   ";
    }
    cout<<endl;
    for(int i  = a - 1 ,  j = 0 ; i>j ; i--,j++){
        int b = arr[i];
        arr[i] = arr[j];
        arr[j] = b;
    }
    
    for(int j  = 0 ; j<a ;j++){
        cout<<arr[j]<<"   ";
    }
    cout<<endl;
    for ( int i = key-1,j =0; i>j  ; j++,i--){
        int b  = arr[i];
        arr[i]= arr[j];
        arr[j] = b;
    }
    //{6,7,8,5,4,3,2,1}
    for(int j  = 0 ; j<a ;j++){
        cout<<arr[j]<<"   ";
    } cout<< endl;
    for ( int i = a-1 ,j = key  ; i>j  ; j++,i--){
    int b = arr[i];
    arr[i]= arr[j];
    arr[j] = b;
}

cout<<"the final array"<<endl;
    for(int j  = 0 ; j<a ;j++){
        cout<<arr[j]<<"   ";
    }
}