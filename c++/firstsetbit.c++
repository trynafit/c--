#include<iostream>
using namespace std; 
 unsigned int getFirstSetBit(int n)
    {
        int run = 0;
        for(int i = 1 ; i<=n ;i = (i<<1)){
           run++;
            if((i&n)!=0){
               return run ;
            }  
        }
        return 0;
    }
    int main(){
   cout<<getFirstSetBit(16);
    }
    /*
    i=00001, n = 10000
    i=00010, n = 10000
    i=00100, n = 
    */