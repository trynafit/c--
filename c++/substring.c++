#include<iostream>
#include<string>
using namespace std;
string substring(string a){//anpna
int length = a.length();
string substring ;
string substring2;
for(int k = 0; k<length ;k++){
     char c = a[k];
    for(int i = k+1; i<length;i++){
    if(c!=a[i]){
   substring2 += a[i];
   cout<<a[i]<<endl;
     if(substring2.length()>substring.length())
   substring = substring2 ;
   cout<<"the current string is "<<substring<<endl;
    }
    
    else{
    substring2.clear();
    }
    }
  
}
return substring;
}
int main(){
    string a ;
 cout<<" enter a string "<<endl;
 cin>>a;
 cout << "the substring is "<<substring(a);
}