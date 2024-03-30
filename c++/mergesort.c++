#include<iostream>
using namespace std;
void merge(int arr[], int left, int right, int middle ){
    int n1 = middle - left+1;
    int n2 = right - middle ;
    int l[n1] , r[n2];
   for(int i =0;i<n1;i++){
    l[i] = arr[i+left];
   }
   for(int j = 0; j<n2 ; j++){
    r[j] = arr[middle +j +1];
   }
    int i ,j, k ;
    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j<n2){
        if(l[i]>r[j]){
            arr[k] = r[j];
            j++;
            k++;
        }
        else{
            arr[k] = l[i];
            i++;
            k++;
        }
    }
    while(i<n1){
     arr[k] = l[i];
            i++;
            k++;
    }
    while(j<n2)
    {
         arr[k] = r[j];
            j++;
            k++;
    }
    
}
 void mergesort(int arr[] ,int left , int right){
if(left<right){
    int middle = (left+right)/2;
    mergesort(arr,left,middle);
    mergesort(arr ,middle +1,right);
    merge(arr,left,right,middle);


}
 }
int main(){
int arr[] = {1,13,35,5,8};
int size = sizeof(arr)/sizeof(arr[0]);
mergesort(arr ,0,size-1);
for(int i=0 ; i<size; i++){
    cout<<arr[i]<<endl;
}
}