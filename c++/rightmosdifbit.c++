#include<iostream>
using namespace std;
int msb(int num){
    int final =0;
    while(num>0){
    num  = num/2; 
    final++;  
    }
    return final;
}
int rightmosdifbit(int m , int n){
    if (m==n){
        return -1;
    }
    else{
       int x = m^n;
       int y= (x&-x);
       return msb(y);
}}
int main(){
cout<<rightmosdifbit(52  , 4);
}