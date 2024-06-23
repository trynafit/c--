#include<iostream>
using namespace std;
int power(int a  ,int b){
if(b==0)
return 1;
int temp = power(a , b/2); //2 2
temp = temp*temp;
if(b%2==0)
return temp;
else
return temp *a;
}
int main(){
    int a , b;
    cout<<"enter the number and its iterative power"<<endl;
    cin>>a;
    cin>>b;
    int abc = power(a,b);
    cout<<abc;

}