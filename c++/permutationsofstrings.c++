#include<iostream>
using namespace std;
void permutationsofstring(string s , int index){
    int size = s.length();
    if (index >= size){
    cout<<s<<endl;
    return;
    }
    else{
    for(int i = 0;i<=index;i++){
        swap(s[i] , s[index]);
        // cout<<"passed";
        permutationsofstring(s , index+1);
                swap(s[i] , s[index]);
    }
}}
int main(){
    cout<<"enter a string "<<endl;
    string s;
    cin>>s;
    permutationsofstring(s , 0);
}
/*
abc
acb
bca
bac
cab
cba
*/