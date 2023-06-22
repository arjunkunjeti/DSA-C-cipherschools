#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d;
	
	cout<<"Input 4 integers a,b,c and d : "<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
    cin>>d;
    
    // Statement using AND operator 
    cout<<"Output of AND operator : " <<(a>b && c>d) <<endl;
    
    // Statement using OR operator 
    cout<<"Output of OR operator : " <<(a>b || c>d) <<endl;
    
    return 0;
}
