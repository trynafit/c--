#include<iostream>
using namespace std;
int digital(int n , int sum){
       if(n==0){
           if(sum<10){
                return sum; 
           }
              return digital(sum , 0);      
       }
       sum += n%10;
       int final =digital(n/10, sum);
       return final;
   }
int main(){
      cout<<digital(9999  , 0);
   }
