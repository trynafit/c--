#include<iostream>
using namespace std;
void subarray(int arr[], int size){
    int middle ,i ;
        middle = size/2;
         int n1[middle] , n2[ size - middle];
         for( i = 0;i<middle;i++){
    n1[i] = arr[i];}
for(int j =0  ;j<(size-middle) ; j++){
    n2[j] = arr[j+i];

    }
    int sizen1 = sizeof(n1)/sizeof(n1[0]);
for (int m =0 ; m<sizen1; m++){
    cout<<n1[m]<<endl;
}
cout<<"first array has ended"<<endl;
int sizen2 = sizeof(n2)/sizeof(n2[0]);
for (int m =0 ; m<sizen2; m++){
    cout<<n2[m]<<endl;
    }
}
void merge(int low , int size , int high, int arr[]){
int middle = (high + low)/2 ;



}
int main(){
    int arr[] = {23,64,1,32,69,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    subarray(arr , size);
}