#include<iostream>
using namespace std;
void onlytwoodds(int arr[] , int n){
     int x =0 ,i;
     int res1 =0, res2=0;
    for( i =0;i<n;i++){
        x =(x^arr[i]);
}
int k = x&(~(x-1));
for(i =0;i<n;i++){
    if((k&arr[i])!=0){
    res1 = res1^(arr[i]);
    }
    else{
        res2 = res2^(arr[i]);
    }
}
cout<<"the numbers are "<< res1 <<" and "<<res2;
}
int main(){
   int arr[] = {12,12 ,12 ,11,13,11 ,12, 13 , 81 , 42};
   int n = sizeof(arr)/sizeof(arr[0]);
   onlytwoodds(arr , n);
    


}