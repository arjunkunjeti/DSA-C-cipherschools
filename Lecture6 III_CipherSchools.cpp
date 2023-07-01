#include<iostream>
using namespace std;
int main()
{
	int i,n;
	
/*	while(i<101)
	{
		cout<<i<<" ";
		i++;
	}*/
	
	i=100;
	for(i=1;i<101;i++)
	{
		cin>>n;
		if(n==65){
			cout<<"you have guessed the correct number";
			break;
		}
	}
}
