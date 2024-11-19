#include<iostream>
#include<string>
using namespace std;
string fun1(int arr[] , int pass , int size , string s){
    if(pass==size){
        cout<<s<<" ";
        return "";
    }
    else{
         string st[] = {"","" ,"abc" , "def" ,"ghi","jkl" , "mno" , "pqrs" , "tuv" , "wxyz"};
    string temp = st[arr[pass]];
        for(int i = 0 ;i < temp.length(); i++){
            string temp2 = s+ temp[i];
             fun1(arr , pass+1 , size , temp2 );
            
        }
        return "";
        }}
int main(){
    int arr[] = {2,3,9};
    fun1(arr , 0 , 3 ,"");
}