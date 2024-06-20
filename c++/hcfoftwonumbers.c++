#include<iostream>
using namespace std;
int hcf(int a , int b){
    if(b==0){
        return a;
    }
    else
    {
        return hcf(b , a%b);
    }
}
int main(){
    int a ;
    int b;
    cout<<"enter the numbers you want to get hcf of"<<endl;
    cin>>a;
    cin>>b;
   int k =  hcf(a,b);
   cout<<"the hcf of two numbers is "<<k;

}//euclid algorithm for calculating hcf
//O(log(min(a,b)))