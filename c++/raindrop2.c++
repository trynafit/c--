#include<iostream>
using namespace std;
int raindrop(int arr[] , int size){
int trapwater = 0;
int leftmax = 0 ;
int rightmax = size-1;
int l = 1;
int r = size-2;
while(l<=r){
    if(arr[leftmax]<arr[rightmax]){
        if(arr[l]<arr[leftmax]){
        trapwater = trapwater + (arr[leftmax] - arr[l]);
        l++;}
       else{
         leftmax = l;
        l--;
        }
    }
    else{
        if(arr[r]<arr[rightmax]){
   trapwater = trapwater + (arr[rightmax] - arr[r]);
   r--;
   }
    else{
         rightmax = r;
        r--;   
    }
}

}
return trapwater;
}
int main()
{
    int a,b ;
cout<<"enter the number of fucking elements youn wnt to enter"<<endl;
cin>>a;
int arr[a];
cout<<"enter the elements"<<endl;

for(int i =0 ;i<a;i++){
    cin>>arr[i];
}
cout<<endl;
b = raindrop(arr , a );
cout<<b;
}