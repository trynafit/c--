#include<iostream>
using namespace std;
int binary(int arr[] , int first , int last , int key){
    if (first<=last){
 int midpoint = (first + last )/2;
 if(arr[midpoint]== key){
    return midpoint;
 }
 else{
    if(arr[midpoint]>key){
        binary(arr, first , midpoint-1, key );
    }
    else{
        binary(arr, midpoint+1, last, key);
    }
 }
 }
 else{
    return 0;
 }
 
 }

int main(){
    int a , b ,key;
cout<<"enter the number of elements you want to enter in the array"<<endl;
cin>>a;
int arr[a];
cout<<"enter the array"<< endl;
for (int i =0 ;i<a;i++){
  cin>>arr[i];
}
cout<<"enter the key"<<endl;
cin>>key;
b = binary(arr , 0 , a-1 , key);
if (b > 0){
cout<<"the elements is at index "<<b+1;
}
else{
    cout<<"element not found";
}
}


