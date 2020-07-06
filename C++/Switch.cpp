#include<iostream>
using namespace std;
int main()
{
	char unit;
	float c,f,temp;
	cout<<"Temperature is measured in which unit\nCelsius[C] Farenheit[F]"<<endl;
	cin >>unit;
	switch(unit){
		case'C':
			cout<<"Temperature ?\n";
			cin>>temp;
			f=(9*temp)/5+32;
            cout<<"\n#*********************************************************#";
			cout<<endl<<"Farenheit ="<<f<<endl;
		break;
		case'F':
			cout<<"Temperature ?\n";
			cin>>temp;
			c=0.556*(temp-32);
            cout<<"\n#*********************************************************#";
			cout<<endl<<"Celsius ="<<c<<endl;
			break;
			}
	return(0);
}