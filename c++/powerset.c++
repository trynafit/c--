#include<iostream>
using namespace std;
void powerset(string s){
    int length = s.length();
    int size = (1<<length);
    for(int i = 0; i<size;i++){
        for(int j =0;j<length;j++){
            if((i&(1<<j))!=0){
                cout<<s[j];
            }
        }
        cout<<endl;
    }
}
int main(){
powerset("kab");
}