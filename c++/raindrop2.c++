#include<iostream>
using namespace std;
int raindrop(int arr[] , int size){
  int trapwater = 0;
  int k = 1;
  int minin;
  int leftmax = 0;
  int rightmax = size - 1;
  while(k<size){
    if(arr[leftmax]>arr[k] && arr[rightmax]>arr[k]){
      minin = min(arr[leftmax] , arr[rightmax]);
      trapwater = trapwater + (minin  - arr[k]);
      if(arr[leftmax]<arr[leftmax+1]){
        leftmax++;
      }
      k++;
    }
    else{
      rightmax--;
      if(rightmax < k){
        rightmax = size - 1 ;
        k++;
      }
    }
  }

    return trapwater;
}
int main(){
    int a ;
    cout<<"enter the size of array"<<endl;
    cin>>a;
    cout<<"enter the array"<<endl;
    int arr[a];
    for (int k =0 ;k<a;k++){
        cin>>arr[k];
    }
    int b = raindrop(arr , a);
    cout<<b;
    
}
