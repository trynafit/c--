#include<iostream>
#include<algorithm>
using namespace std;
void selection(int arr[],int size){
int i = 0;
for(int j = 0 ; j < size  ; j++){
    int minindex = arr[j];
for( i = j+1 ; i < size ;i++){
    if(arr[i]<minindex){
   swap(arr[j],arr[i]);
    minindex = arr[j];
    }
}
}
for(int i = 0;i<size-1;i++){
    cout<<arr[i]<<endl;
}
}
int main(){
    int arr[]={1,34,54,1,3,5,7,98,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    selection(arr,size);
}
  