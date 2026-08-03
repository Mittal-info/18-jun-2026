#include<iostream>
using namespace std;
class Address
{
	public:
		string city,state;
		int pin;
		
		Address(string c,string s,int p)
		{
			this->city=c;
			this->state=s;
			this->pin=p;
		}
};
class Emp
{
	public:
		string name;
		int id;
		Address *a;
		Emp(string N,int I,Address*a)
		{
			this->name=N;
			this->id=I;
			this->a=a;
		}
		
		void display()
		{
			cout<<name<<endl;
			cout<<id<<endl;
			cout<<a->city<<endl;
			cout<<a->state<<endl;
			cout<<a->pin<<endl;
		}
};
int main()
{
	Address A1=Address("Idar","Gujrat",383440);
	Emp E1=Emp("MMM",101,&A1);
	E1.display();
	return 0;
}