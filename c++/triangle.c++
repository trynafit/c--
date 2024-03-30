#include<iostream>
using namespace std;
int main(){
    int i ,j ,k;
    for ( i = 0 ; i<20; i++){
        for( j = 20 -i ;j>0;j--){
            cout<<" ";
            
           
        }
         for( k = 0;k<=i;k++){
            cout<<"* ";
        }
        
        cout<<endl;
    }
}