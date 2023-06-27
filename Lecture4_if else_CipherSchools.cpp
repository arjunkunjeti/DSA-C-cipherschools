#include<iostream>
using namespace std;

int main()
{
	
float marks;
cout<<"Enter the Marks :";
cin>>marks;
if(marks>=90)
{
	cout<<"The grade is A";
}
else if(marks<90 && marks>=80)
{
	cout<<"The grade is B";
}
else if(marks<80 && marks>=70)
{
	cout<<"The grade is C";
}
else
{
	cout<<"Pass";
}

}
