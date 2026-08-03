#include<iostream>
using namespace std;

class A
{
	public:
		void displayA()
		{
			cout<<"Class A is here"<<endl;
		}
};

class B:virtual public A
{
	public:
		void displayB()
		{
			cout<<"Class B is here"<<endl;
		}
	
};

class C:virtual public A
{
   
   public:
		void displayC()
		{
			cout<<"Class C is here"<<endl;
		}
   	
};

class D:public B,public C
{
	public:
		void displayD()
		{
			cout<<"Class D is here"<<endl;
		}
};

int main()
{
	D d=D();
	d.displayA();
	d.displayB();
	d.displayC();
	d.displayD();
	
	return 0;
}