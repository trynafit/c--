#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5}; 
    int x= 2;
    int c= 1;
     
     int size = sizeof(a)/sizeof(a[0]);
     //cout<<size;
     for (int b = 0 ; b<size; b++){
        for(c=b+1;c<size;c++){
        if( a[b] + a[c] == x){
            cout<<"yes there are two digits that combine to form x";
            break;
        }
       
     }}

    
}