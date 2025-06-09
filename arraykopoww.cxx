#include<iostream>
using namespace std;

int main()
{
	
	string food[]={"Inasal","Barbecue","Leche Flan","Fried-Chicken"};
	
	int sizee=sizeof(food)/sizeof(food[0]);
	
	for(int a=0;a<sizee;a++){
		cout<<food[a]<<endl;
	}
	
	
	
	
	return 0;
}