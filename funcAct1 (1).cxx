#include<iostream>

using namespace std;

void  OddEven(int num)

{
	
	
	
	
	cout<<"Enter a number: ";
	cin>>num;
	
	
	if(num>=1 && num<=10)
	{
		if(num%2==0)
		{
		cout<<num<<" is an EVEN number";	
		}
		
		else
		{
		 cout<<num<<" is an ODD number";
		}
	}
	 
	 else
	 {
	  cout<<num<<" is an INVALID number";
	 }
	
}
int main(){
	
 	int y;
 	
 	OddEven(y);
	
	
	return 0;
	
	}