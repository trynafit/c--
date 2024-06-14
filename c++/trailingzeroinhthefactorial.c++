#include<iostream>
using namespace std;
int main(){
    int a ;
    int count = 0;
    int j = 5;
     cout<<"enter the number you want to check trailing zeroes of factorial";
     cout<<endl;
    cin>>a;
    while(a%j==0)
    {
   count = count+(a/j);
   j*=5;
    }
cout<<"the number of trailing zeros are "<<count<<endl;
}
// The idea is to consider prime factors of a factorial n. A trailing zero is always produced by prime factors 2 and 5. Our task is done if we can count the number of 5s and 2s. Consider the following examples:

// n = 5: There is one 5 and 3 2s in prime factors of 5! (2 * 2 * 2 * 3 * 5). So a count of trailing 0s is 1.
// n = 11: There are two 5s and eight 2s in prime factors of 11! (28 * 34 * 52 * 7 * 11). So the count of trailing 0s is 2.
// We can easily observe that the number of 2s in prime factors is always more than or equal to the number of 5s. So if we count 5s in prime factors, we are done.