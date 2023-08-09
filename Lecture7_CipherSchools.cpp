#include<iostream>
using namespace std;

int main()
{
	int password;
	
	// Using do-while loop
	/*
	do
	{
	    cout<<"Enter the password : " <<endl;
		cin>>password;
	}
	while(password<999999);
	*/
	
	//Using While loop
	while(password<999999)
	{
		cout<<"Enter the Password : "<<endl;
		cin>>password;
	}
	
	
	
	
	
	
	
	
	
	// Using While loop
	/*
	cout<<"Enter the Password : "<<endl;
	cin>>password;
	
	while(password<999999)
	{
		cout<<"The password does not meet the required condition,Please enter the password again"<<endl;
        cin>>password;		
	}
	cout<<" The user has now entered a correct password"<<endl;
	*/
	
	
	
	
	return 0;
}
