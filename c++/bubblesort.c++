#include<iostream>
using namespace std;
int bubble(  int arr[], int size){
    for(int j =0 ;j<size;j++){
    for (int i = 0 ; i<size-1;i++){
        if (arr[i]>arr[i+1]){
            int c = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = c;
        }
    }
}
 for(int i =0; i<size;i++){
        cout<<arr[i];
        cout<<endl;
    }
}
int main(){
    int arr[] = {1,434,46523,34,231,65,32,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubble(arr,size);
   

}//o(N*2)