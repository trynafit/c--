#include<iostream>
using namespace std;
int main()
{
    int array[] = {12,12 ,12 ,11,13,11 ,12, 13 , 81};
    int x =0;
    for(int i =0;i<(sizeof(array)/sizeof(array[1]));i++){
        x =(x^array[i]);
    }
    cout<<"the only odd occouring is "<<x;
}