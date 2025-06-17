#include<iostream>
using namespace std;
void poweredset(string s ,string temp, int index){
    int size = s.length();
   if(index >= size){
   cout<<temp<<endl;
   return;}
poweredset(s , temp+s[index] , index+1);
poweredset(s , temp , index+1);
   }



int main(){
    string s;
    cout<<"enter a string ";
    cin>>s;
    poweredset(s , " " , 0 );
}