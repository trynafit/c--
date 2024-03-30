#include<iostream>
using namespace std;
void insertion(int arr[],int size){
    for( int i = 1  ;  i<size ; i++){
    int j = i-1;
    while(j>=0 && arr[j]>arr[j+1]){
       swap(arr[j],arr[j+1]);
       j--;
       
        }
        }
for(int g=0; g<size;g++){
        cout<<arr[g]<<endl;
    }}
int main(){
    int arr[] = {6,5,74,2,3,245,4564,21355,2345,2344};
    int size  = sizeof(arr)/sizeof(arr[0]);
    insertion(arr,size);
    
    
}
