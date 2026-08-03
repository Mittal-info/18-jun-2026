#include<iostream>
using namespace std;

class Parent
{
	public:
		void displayA()
		{
			cout<<"Parent class is here.."<<endl;
		}
};
class Child:public Parent//Inheritance
{
       public:
		void child()
		{
			cout<<"child class is here.."<<endl;
		}

};

int main()
{
	  Child c1 = Child();//object create
	  c1.displayA();
	  c1.child();
	  
	
	return 0;
}