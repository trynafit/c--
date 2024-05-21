#include<iostream>
#include<string.h>
using namespace std;
string substring(string word){//anpna
int length = word.length();
int a = 0;
int b = 1;
string substring1;
string substring2;
string final;
substring1+=word[0];//final = a
while(a<b){
  if(b==length-1)
  return final;
if(word[a]!=word[b]){
if(a==b){
substring1 += word[b];
b++;
a=0;
substring2 = substring1;
}
else
a++;
}
else{
b++;
a=0;
if(substring2.length()>final.length()){
  final = substring2;
}
substring1.clear();
}
}
return final;
}
int main(){
  string word;
  cout<<"enter a string"<<endl;
  cin>>word;
  string final = substring(word);
  cout<<"the final longest substring without repeating any character is "<<final;
}