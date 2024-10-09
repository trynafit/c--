#include<iostream>
using namespace std;
unsigned int setbits(unsigned int x){
for(int i =0;i<32;i=i+2){
    int ith =(x>>i) & 1;
    int jth = (x>>(i+1)) & 1;
    x =x - (ith<<i);
    x =x- (jth<<(i+1));
    x += (ith<<(i+1));
    x += (jth<<(i));
}
return x;
}
int main(){
    cout<<setbits(23);
}
