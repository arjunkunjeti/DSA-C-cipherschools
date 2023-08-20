#include<iostream>
using namespace std;

int compare(int a, int b)
{
	int c;
	if(a>b){
		c=a;
	}
	else
	{
		c=b;
	}
	// now c will store the maximum of a and b
	return c;
	
}
/*
int compare(int a, int b)
{
	if(a==5)
	{
		return 1;
	}
	return 0;
}*/

int main(){
	int a,b;
	a = 2 ; b =5;
	cout<<compare(a,b);
	return 0;
}
