#include<iostream>

using namespace std;

int main(){
	 /*c++ program that shows array*/
	  int arraykopow[10];
	  int a=0;
	  
	  for(int a=0;a<10;a++){
	  	cout<<"Enter the array number element  "<<a+1<<" : ";
	  	cin>>arraykopow[a];
	  }
	  
	  cout<<"\================\n\n";
	  
	  for(int a=0;a<10;a++){
	  	cout<<"Value of array element number"<<a+1<<" is "<<arraykopow[a]<<"\n";
	  }
	
	  cout<<"=====Nothing Follows=====";
	
	
	return 0;
}