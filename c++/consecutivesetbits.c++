#include<iostream>
using namespace std;
int consecutivesetbits(int n)
{
    int final = 0;
    int a = 0;
    while(n>0){
        if(n&1>0){
            a++;
            if (a>=final){
                final = a;
            }
        }
        else{
            a = 0;
        }
        n = n>>1;
         
    }
   return final;
}
int main(){
    cout<<consecutivesetbits(120);
}