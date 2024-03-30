#include<iostream>
using namespace std;
int largest(int array[], int first,int last){
    int largenum = array[first];
  for(int b=first; b<last;b++){
    if(array[b]>largenum)
    largenum = array[b];
  }
  return largenum;
}
int main(){
    int a , b = 0 ;
    cout<<"enter the size of array"<<endl;
     cin>>a;
    int arr[a]; 
    cout<<"enter the array"<<endl;
    for(int l=0;l<a;l++){
        cin>>arr[l];
    }
    for(int k = 1; k<a-1;k++){
        int temp1 = largest(arr,0,k);
        int temp2 = largest(arr , k , a);
        if(temp1>arr[k] && temp2>arr[k]){
          int minin = min(temp1 , temp2);
          b = b+(minin-arr[k]);
            }

        }
         cout<<"the amount of litres stored is "<<b;
    }
   
    
