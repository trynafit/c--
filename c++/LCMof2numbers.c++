#include<iostream>
using namespace std;
int LCM(int a , int b){
    if(a%b==0)
    return a;
    else{
        if(b%a==0)
        return b;
    }
    if(a<b){
        for(int i = 2;i<100;i++){
        if((b*i)%a==0)
        return b*i;
    }
    }
    else{
  for(int i = 2;i<11;i++){
        if((a*i)%b==0)
        return a*i;
    }
    }
    return a*b;
}
int main(){
    int a ;
    int b;
cout<<"enter the two numbers you want to get lcm of "<<endl;
cin>>a;
cin>>b;
int k = LCM(a , b);
cout<<"the lcm of and b is "<<k;
}//inefficient solution.
