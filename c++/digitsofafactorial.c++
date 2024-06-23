#include<iostream>
#include<cmath>
int factoridaldigit(int n){
    double result = 0;
for(int i = 1;i<=n;i++){
     result += log10(i);
}
return static_cast<int>(std::floor(result)) + 1;
}
int main(){
int a;
std::cin>>a;
std::cout<<factoridaldigit(a);
}