#include<iostream>
using namespace std;
int decimaltobinary(int n){
    int final = 0;
    int place =1;
    while(n>0){
        int bit = n&1;
        final = final + (place*bit);
        place = place *10;
        n = n>>1;
    }
    return final;
}
int binarytogray(int n){
    int temp = n^(n>>1);
    return temp;
}
int graytobinary(int n){
    int temp = n;
    while(n>0){
        n =n>>1;
        temp = temp^n;
    }
    return temp;
}
int main(){
    cout<<"enter a number"<<endl;
    int a;
    cin>>a;
    cout<<graytobinary(a);
}