#include<iostream>

using namespace std;

int main(){
	
	  int grade;
	
	 cout<<"Enter your grade:  ";
	 cin>>grade;
	 
	 if(grade<101 && grade>49)
	 {
	 	if(grade>=75)
	 	{
	 	   cout<<grade<<" is a PASSING grade \n";      	}
	 	 
	 	else
	 	{
	 	   cout<<grade<<" is a FAILING grade \n";
	 	 }
	 	 
	 }
	 
	 else
	 {
        cout<<grade<<" is an INVALID grade \n";
 	}

	return 0;
	}