#include <iostream>
using namespace std;
int main(){
    int c = 0;
    int a[] = {1,4,5,45,45,454,54,45,323423,234234234,23,4234234,234,234,2423,};
    int size = sizeof(a)/sizeof(a[0]);
    for(int b=0; b<size;b++){
        if(c<a[b]){
            c = a[b];
        }
        
    }
    cout<<"the largest no in the array is " <<c<< endl;
    cout<<size<<endl;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(a[0]);

}