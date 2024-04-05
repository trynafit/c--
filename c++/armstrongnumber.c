#include<stdio.h>
int main(){
    int a ;
    int b = 0;
    int c;
    int d;
    scanf("%d", &a);
    d = a;
    while(a>0){
        c = a%10;
        b = b + (c*c*c);
        a = a/10;
    }
    if(d==b){
        printf("yes");

    }
    else{
        printf("no");
    }
}// i am changing this 