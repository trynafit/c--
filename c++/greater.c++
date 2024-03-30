#include<iostream>
#include<stdlib.h>
#include<climits>
using namespace std;
int findmax(int a){
    static int d = INT_MIN;
    if(a>d){
        d=a;
    }
    return d;
};
int main(){
    int c;
    cout<<"enter the amount of numbers you want to enter"<<endl;
    cin>>c;
int arr[c];
for(int i =0; i<c;i++){
    cin>>arr[i];
    int m = arr[i];
    findmax(m);
}

int b; 
int result = INT_MIN;
b = findmax(result);
cout<<b;
}