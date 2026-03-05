#include<iostream>
#include<stack>
#include<unordered_set>
#include<unordered_map>
#include<vector>
using namespace std;
bool fun1(string s){
    int length = s.length();
    stack<char> s1;
    int i=0;
    unordered_map<char , char> um;
    um.insert({'(' , ')'});
    um.insert({'{' , '}'});
    um.insert({'[' , ']'});
    unordered_set<char> opening;
    opening.insert('(');
    opening.insert('{');
    opening.insert('[');
    unordered_set<char> closing;
    closing.insert(')');
    closing.insert(']');
    closing.insert('}');
    while(i<length){
        if(opening.find(s[i])!=opening.end()){
            s1.push(s[i]);
        }
        else if(closing.find(s[i])!=closing.end()){
            if(s1.empty()){
                return false;
            }
             char top = s1.top();
            char temp = um[top];
            if(temp!=s[i]){
                return false;
            }
            s1.pop();
        }
        i++;
    }
    if(s1.empty()){
        return true;
    }
    return false;
}
int main(){
     string s = "{[()]}";

    if(fun1(s))
        cout<<"Valid";
    else
        cout<<"Invalid";
}