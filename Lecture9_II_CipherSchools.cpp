#include<iostream>
using namespace std;


// int sum(int ,int );   // head of the function  // prototye method

int sum(int a,int b){
	int c ;
	c = a + b;
	
	a= 10;
	b= 11;
	
	return c;
}


int main(){
	int a,b;
	a = 5;
	b = 4;
	
	int c;
	cout<<a<<" "<<b<<endl;
	c= sum(a,b);
	
	cout<<c<<endl;
	cout<<a<<" "<<b<<endl;
	return 0;
}

/*
// Body of the fuction 
int sum(int a,int b)
{
return a+b;
}
*/




