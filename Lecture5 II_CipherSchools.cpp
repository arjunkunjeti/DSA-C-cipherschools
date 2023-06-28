#include<iostream>
using namespace std;

int main()
{
	int a[5],i;
	cout<<" Enter the numbers  : ";
	
	for(i=0;i<5;i++){
	
	cin>>a[i];
}
	for(i=0;i<5;i++){

	cout<<a[i]<<" ";    // numbers are displayed in the usual order
}
    cout<<endl;
	for(i=4;i>=0;i--){
	
	cout<<a[i]<<" "; // numbers are displayed in the reverse order
}
}
