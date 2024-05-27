#include<iostream>
using namespace std;
int main(){
    string aschi = {"iejrhkdg"};
    int aschiichar[256] ; 
 for(int i = 0 ;i<256 ; i++)
{
    aschiichar[i] = -1;
    }
    cout<<aschiichar[aschi[5]];
cout<<endl<<aschi[5];}