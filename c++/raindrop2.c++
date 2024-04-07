#include<iostream>
using namespace std;
int raindrop(int arr[] , int size){
  int trapwater  = 0;
   int rightmax = size - 1;
   int leftmax = 0;
   int l = 1;
   int r = size - 2 ;
   while(leftmax<=rightmax){//[8,7,3,1,9]
    if(arr[leftmax]<=arr[rightmax]){
    if(arr[l]<arr[leftmax]){
        trapwater = trapwater +(arr[leftmax] - arr[l]);
        l++;
    }
    else{
        leftmax++;
       } 
       }
       else{
        if(arr[rightmax]>arr[r]){
            trapwater = trapwater + (arr[rightmax] - arr[r]);
            r--;
        }
        else{
            if(arr[rightmax]==arr[r]){
                r--;
                rightmax = r;
            }
            else{
            rightmax = r;
            r--;
            }
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
