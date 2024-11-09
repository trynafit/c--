#include<iostream>
using namespace std;
bool islucky(int n , int number) {
    if(n<number){
        return 1;
    }
    if(n%number == 0){
        return 0;
    }
        int newn = n - (n/number);
        number++;
        return islucky(newn , number );
        
    }
    bool isLucky(int n ) {
     return islucky( n , 2);
        
    }
    int main(){
        cout<<isLucky(5);
    }