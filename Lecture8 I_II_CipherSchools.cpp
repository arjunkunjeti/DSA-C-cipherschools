#include<iostream>
using namespace std;

int sum(int a,int b){
	int c ;
	c = a + b;
	return c;
}

int main(){

int a,b;
int d;
a= 3, b= 1;
d=sum(a,b);
cout<<d;
return 0;
}
