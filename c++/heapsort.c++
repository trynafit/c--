#include<iostream>
using namespace std;
void heapify(int *arr , int n , int number){
    int biggest = number;
    int left = 2*number + 1;
    int right = 2*number + 2;
    if(left<n && arr[left] > arr[biggest]){
        biggest= left;
        
    }
     if(right<n && arr[right] > arr[biggest]){
        biggest= right;
    }
    if(biggest != number){
        swap(arr[number] , arr[biggest]);
        heapify(arr , n , biggest);
    }
    
}
void heapsort(int *arr  , int n){
    for(int i = (n/2) -1; i>=0; i--){
        heapify( arr , n , i);
    }
    for(int i = n-1 ; i>=0; i--){
        swap(arr[i] ,  arr[0]);
        heapify(arr , i , 0);
    }
    
    
}
int main(){
    int arr[] = {12 , 35 ,765 , 2, 3 ,7 ,45 ,0 ,8};
    heapsort(arr , 9);
    for(int i = 0;  i<9 ; i++){
        cout<<arr[i]<<endl;
    }
}