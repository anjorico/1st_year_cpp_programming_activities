#include<iostream>
using namespace std;

int main()
{
	float arz[100];
	int i=0;
	float sum=0;
	float ave=0;
	int n=0;
	
	cout<<"Enter array size:  ";
	cin>>n;
	
	if(n<101)
	{
		for(i=0;i<n;i++)
		{
			cout<<"Enter the number of value of data entry#"<<i+1<<" :" ;
			cin>>arz[i];
			sum= sum + arz[i];
		}
	ave= sum/n;
	
	
		cout<<"\nTherefore, the sum of all data entries is: "<<sum;
		cout<<"\nTherefore,the average of all data entries is:"<<ave;
		
	}
	
	
	
	
	
	return 0;
}