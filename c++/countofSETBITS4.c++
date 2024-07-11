#include<iostream>
using namespace std;
int countSetBits(int n)
    {
      int  result = 0;
            if(n==0)
            return 0;
            if(n&1)
            result++;
            result = result + countSetBits(n/2);
            return result;
            
    }
    
int main(){
cout<<countSetBits(5);
}
