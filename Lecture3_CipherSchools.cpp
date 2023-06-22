#include<iostream>
using namespace std;

int main()
{
	// variables are declared of int type
	int a,b,c;    
	
	a=3;
	b=5;
	
	c=a+b;
	
	cout<<c<<endl;
	
	// a+b is similar to storing value in third variable
	cout<<a+b<<endl;
	
	// here the value in " " is considered constant so it is not altered and printed as it is.
	cout<<"a+b";
	return 0;
}
