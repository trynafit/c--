#include<iostream>
using namespace std;
int extended_euclidean(int a , int b , int &x , int &y){
if(b == 0){
x = 1;
y = 0;
return a ;
}
int x1 , y1;
int g = extended_euclidean(b , a%b, x1 , y1);
x = y1;
y = x1 - (a/b)*y1;
return g;
}
int multiplictiveinverse(int a , int m){
    if(m==1)
    return -1;
    int x , y;
    if(extended_euclidean(a, m , x ,y)!= 1)
    return -1;
    else{
        x = (x % m + m) % m; 
    }
    return x;
}
int main()
{
    int a , m;
    cout<<"enter the values of a and m"<<endl;
    cin>>a>>m;
    cout<<"the modular multipl"<<
    "ticative inverse is "<<multiplictiveinverse(a , m)<<endl;
}

