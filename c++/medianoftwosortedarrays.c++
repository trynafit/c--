#include<iostream>
#include<climits>
#include<vector>
using namespace std;
double median(vector<int> &a , vector<int> &b){
    int n1 = a.size();
    int n2 = b.size();
    if(n1>n2){
        return median(b,a);
    }
    int low = 0, high = n1;
    while(low<=high){
    int cut1 = (low + high)/2;
    int cut2 = (n1 + n2 + 1 )/2 - cut1;
    int a1 = (cut1==0)? INT_MIN: a[cut1-1];
    int a2 = (cut1==n1)? INT_MAX: a[cut1];
    int b1 = (cut2==0)?INT_MIN:b[cut2-1];
    int b2 = (cut2==n2)?INT_MAX:b[cut2];
    if(a1<=b2 && b1<=a2){
        if((n1+n2)%2==0){
            return ( max(a1,b1) + min(a2,b2))/2.0;
        }
        else{
            return max(a1,b1);
        }
    }
    else{
        if(a1>b2){
            high = cut1-1;
        }
        else{
            low = cut1+1;
        }
    }
   
    }
    return 0.0;
}

int main(){
    vector<int> v1 = {1,3};
    vector<int> v2 = {2};
    
    cout<<median(v1,v2);
}