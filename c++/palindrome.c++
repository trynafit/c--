#include<iostream>
using namespace std;
int main(){
    int a;
    int d = 0;
    int c;
    cout<<"enter a number"<<endl;
    cin>>a;
    int g = a;//123
    while(g>d){
       c = g%10;
        d = (d*10) + c;
        g/=10;
        }
        if(a==d){
            cout<<"the number is palindrome"<<d;
        }
   else{
    cout<<"the number is not palindrome"<<d;
   }

    
}/*this code works in a principal that int a = 35
when divided by 10 will result in a = 3
also in this code the every number is added at ones place and then moved to 
tens or hunderedth by multiplying 10 */