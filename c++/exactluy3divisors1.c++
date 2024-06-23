#include<iostream>
#include<vector>
using namespace std;
 int exactly3Divisors(int n)
    {
        int fresult=0;
     vector<int> threed(n+1, 0);
     for(int k = 1;k<n;k++){
     for(int i = 1;i<=k;i++){
        if(k%i==0){
         threed[k]++;
          }
        }
    }
    for(int j = 1; j<n+1;j++){
        if(threed[j]==3){
            fresult++;
        }
    }
    return fresult;
    }
int main(){
    int a;
    cin>>a;
cout<<exactly3Divisors(a);
}