#include<iostream>
using namespace std;
int main(){
    cout<<"enter an array"<<endl;
    string word ;
    cin>>word;
    int arr[256]; 
    string temporary = " ";
    string final = " ";
    for(int i = 0 ; i<256; i++){
        arr[i] = -1;
    }
    int size = word.length();
    int start = 0 , end = 0 , currelength = 0, maxlenght = 0;
    for(int end = 0 ; end<size ; end++){
        if(arr[word[end]] == -1 || arr[word[end]]<start){
            currelength += 1;
            temporary += word[end];
            arr[word[end]] = end;
            if(currelength>maxlenght)
            maxlenght = currelength;
            if(temporary.length()>final.length())
            final = temporary;
        }
        else{
       start = arr[word[end]] + 1;
        if(currelength>maxlenght)
            maxlenght = currelength;
            currelength = 0;
            temporary = " ";
        }
    }
cout<<"the maximum length of subarray without repating character is "
<<maxlenght<<endl;
cout<<"the subarray is "<<final;
}