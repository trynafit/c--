#include<iostream>
using namespace std;
int countofsetbits(int num){
    int count = 0;
    while(num>0){
        num = num&(num-1);
        count++;
    }
    return count;
}
int diffent(int a  , int b){
    if( a== b){
        return 0;
    }
    else{
        int x = a^b;
   return countofsetbits(x);
    }
}
int main(){
    cout<<diffent(20 , 10);
}