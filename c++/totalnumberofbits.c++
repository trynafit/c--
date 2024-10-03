#include<iostream>
using namespace std;
int msb(int num){
    int final =0;
    while(num>0){
    num  = num/2; 
    final++;  
    }
    return final;
}
int digit(int num , int msb1){
    int final =0;
    int y = ((msb1)*(1<<(msb1-1)));
    msb1--;
    int l = ((msb1)*(1<<(msb1-1)));
    msb1++;
    int k =1<<msb1;
    if(msb1 == 1){
        return final+1;
    }
    else{
        if(num == k-1){
       return y;

        }
        else{
            return l+1;
        }
    }
}
int countofsetbits(int num ){
    int final =0;
    while(num>0){
        int msb1 = msb(num);
        int temp = digit(num , msb1);
        if(num ==((1<<(msb1))-1))
        {
            final += temp;
            num = num - ((1<<(msb1))-1);
            cout<<temp<<endl;
        }
        else{
        num = num - (1<<(msb1-1));
        final =final+temp+num;
        cout<<temp<<endl;
    }}
    return final;
}
int main(){
    int num;
    cin>>num;
    cout<<countofsetbits(num);
    }