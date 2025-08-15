#include<iostream>
using namespace std;
int returner(int arr[] , int size){
    int low = 0;
    int high = size-1;
    while(low<high){
        int mid = (low+high)/2;
        if(arr[mid]>arr[mid+1]){
            high = mid;
        }
        else{
            low = mid+1;
        }
    }
    return arr[high];

}
int main(){
    int arr[] = {2,4,5,2,1,0 ,-1 ,-2 ,-3};
    cout<<returner(arr , 9);
}