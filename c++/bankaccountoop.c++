#include<iostream>
#include<cmath>
using namespace std;
class bankaccount{
    private:
    int accountno = 1234 ;
    string holdername ="Ramesh";
    string acounttype = "saving";
    long double balance = 1000.00;
    int function;

public:
bankaccount(){}
bankaccount(int accountno , string holdername , string accouttype){
   if(accountno == this->accountno && holdername == this->holdername
    && this->acounttype == accouttype){
        cout<<"if you want to withdraw money enter 1"<<endl<<
        "if you want to deposit money enter 2"<<endl<<
         "if you want to check balance enter 3"<<endl;
         cin>>function;
         if(function == 1 || function == 2 || function == 3){
            if(function == 1){
                withdraw();
            }
            else{
                if(function == 2){
                    deposit();
                }
            else{
                balancecheck();}
            }
         }
         else{
            return;
         }
}
    else{
        cout<<"no such account is there try again"<<endl;
        return;
    }
    

};
private:
void withdraw(){
    double x;
    cout<<"enter the amount you want to withdraw"<<endl;
    cin >> x;
if(x<=balance){
    balance = balance - x;
    cout<<"the cash has been withdrawn and the remaining balance is  "<<balance;
}
else
cout<<"account balance too low"<<endl;
}
void balancecheck(){
   cout<< "the balance is " << balance<<endl;
}
void deposit(){
   long double x;
    cout<<"enter the amount to be deposited"<<endl;
    cin>>x;
    x = abs(x);
    balance += x;
    cout<<"successfully added "<<endl;
    cout<<"the new balance is "<<balance;
}
};
int main(){
   bankaccount s(1234 , "Ramesh"  ,"saving");
    bankaccount s2;
}