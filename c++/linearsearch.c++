#include<iostream>
using namespace std;
int binary(int arr[], int key, int first, int last) {
    if (last >= first) {
        int mid = (first + last) / 2;
        if (arr[mid] == key) {
            return mid  ;
        }
        if (arr[mid] > key) {
            return binary(arr, key, first, mid - 1);
        }
        return binary(arr, key, mid + 1, last);
    }
    return -1; // Element not found
}
int main(){
    int b , key;
cout<<" enter the size of array"<<endl;
cin>>b;
int arr[b];
cout<<"enter the elements"<<endl;
for(int i = 0;i<b;i++){
    cin>>arr[i];
}
cout<<"enter the key"<<endl;
cin>>key;
int c ;
c = binary(arr , key , 0 , b-1);
cout<<"the index of the element is "<<c+1;
}