//Mehod overriding
#include<iostream>
using namespace std;
class Parent
{
	public:
		void display()
		{
			cout<<"Parent class"<<endl;
		}
};
class Child: public Parent
{
		public:
		void display()
		{
			//scope resolution operator to access another class properties
			Parent::display();
			cout<<"Child class"<<endl;
		}
};
int main()
{
	Child c1 = Child();
	c1.display();
	return 0;
}