#include <iostream>
using namespace std;
int arr(){
int c=0;
	int a[5];
	cout<<"enter the values of array\n";
	for(int b = 0 ; b<5; b++){
		cin>>a[b];
		 c +=a[b];
	}
	return c;
	

} int main()
	{
	int result	= arr();
	cout<<result;
	
	}
