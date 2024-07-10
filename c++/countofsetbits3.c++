#include<iostream>
using namespace std;
int lookuparray[256];
void initializearray(){
    for(int i=0;i<256;i++){
        lookuparray[i] = (i&1)+lookuparray[i/2];
    }
}
 int countofsetbits(int n){
        int count = lookuparray[(n&0xff)] + 
        lookuparray[((n>>8)&0xff)]+
         lookuparray[((n>>16)&0xff)]+
          lookuparray[((n>>24)&0xff)];   
        return count;
    }
int main(){
initializearray();
int n;
cout<<"enter an integer"<<endl;
cin>>n;
cout<<"the number of set bits are "<<countofsetbits(n);
}