#include<iostream>
using namespace std;
int main(){
 
    int *b = new int;
    
    //here null means that the pointer is not pointing to any valid memory location
       *b =34509;
    cout<<*b;
    delete b;

}
/*so this is a summary of pointers , their use , some habits you need to 
  take care of and also the use of ampersand sign 
1-so the int *b ; used in declaring a variable *b actually means that
there is a variable named b  that will store memory address of a 
specific inteager note that whenever you are refrering b it means the 
variable that stores hexadecimal memory address of the value which is 
stored at that particular at that adress not the value itself 

2-the expression (*a) is the actual variable name or you can say syntax
to call the actual value which may or may not be an integer,string ,char
etc  value iteation will also take place through this very syntax
3 - when a poiter of a specific name say a is declared as a pointer . 
then the word a can now never be used as variable of another type in the same 
scope.
4 - the ampersand sign & in the c++ languge is used to fetch the memory
address of a specific variable and it has nothing to do with a pointer.
  */