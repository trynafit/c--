#include<iostream>
using namespace std;
int main(){
    int arr[]= {1,2,3,4,5,8,8,5,8,8,8,3};
    int count = 1;
    int size = sizeof(arr)/sizeof(arr[0]);
    int n = size/2;
    int a = arr[0];
for (int i = 1;i<size;i++){
    if(a==arr[i]){
        count++;
    }
    else{
        count--;
        if(count==0){
            a = arr[i];
            count =1;
        }
    }
}
count =0;
for (int b = 0 ;b<size;b++){
    if(arr[b]==a ){
        count++;
    }
}
if(count>=n){
    cout<<"there is a majority element in the array";

}
else{
    cout<<"there is no majority element in the array";
}

}
/*this method only works for clear majority and not forn equality
if the no of elements in the array are even and the majority element is alternative
this method wont work
{1,2,1,3,1,4,1,5,1,6} - this wont work for this matrix
 
 this method works on the principal that if the element is majority it will
 definitely repeat at least once in a consecutive index to which it was previously
 recorded*/