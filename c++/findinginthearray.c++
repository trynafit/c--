#include<iostream>
using namespace std;
int c =0;
 int array(int a , int arr[])
 {
   //LOOP:
    if(arr [c] == a){
        return c+1 ;
    }
    else{
        c++;
       //  goto LOOP;
       return array(a , arr);
    }
 }
int main(){   
    int key = 4 ;
   int arr[] = {545454,8454,54,5,45,45,5,454,4,5};
   int k = sizeof(arr)/sizeof(arr[0]);
   int y = array(4 , arr);
    cout<<y;}
    //for not declaring int c global`

    /*  
    
    
    #include<iostream>
using namespace std;

int array(int a, int arr[], int c=0) {
    if (arr[c] == a) {
        return c + 1;
    } else {
        return array(a, arr, c + 1);
    }
}

int main() {
    int key = 4;
    int arr[] = {545454, 8454, 54, 5, 45, 45, 5, 454, 4, 5};
    int k = sizeof(arr) / sizeof(arr[0]);
    int y = array(key, arr);  // Start with c = 0
    cout << y;
    
    return 0;
}
*/