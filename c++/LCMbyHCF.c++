#include<iostream>
using namespace std;
int HCF(int a , int b){
    if(b==0)
    return a;
    else{
        return HCF(b , a%b);
    }
}
int LCM(int a , int b){
    int hcf = HCF(a ,b);
    return (a*b)/hcf;
}
    int main(){
    int a ;
    int b;
cout<<"enter the two numbers you want to get lcm of "<<endl;
cin>>a;
cin>>b;
int k = LCM(a , b);
cout<<"the lcm of and b is "<<k;
}
//this method is efficient