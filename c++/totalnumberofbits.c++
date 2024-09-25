#include<iostream>
using namespace std;
int msb(int num){
    int msb =0;
    while(num!=0){
        num = num/2;
        msb++;

    }
    msb--;
    return msb;
}
int countofsetbits(int num){
    int final =0;
    for(int i =0;i<32;i++){
    int msb1 = msb(num);
    cout<<(1<<msb1)<<endl;
    if(num==(1<<msb1))
    {
        final +=1;
        return final;
    }
    else{
    
       if (num =((1<<msb1)-1) )
    {
        final = final +(1<<(msb1))*msb1+1;
        return final;
    }
          else if (num>(1<<msb1)){
        final = final + (1<<(msb1-1))*msb1;
        final ++;
        num = num - (1<<msb1);
    }
    
}}}

int main(){
    int num;
 cout<<"enter a number"<<endl;
 cin>>num;
 cout<<countofsetbits(num);
}
