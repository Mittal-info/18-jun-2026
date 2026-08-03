//Using abstraction
#include<iostream>
using namespace std;
class Parent //abstraction class
{
	public:
	 virtual void land() = 0;// pure virtual method
		
};
class Child1:public Parent
{
	public:
		void land()//abstraction implement
		{
			cout<<"\n Home";
		}
};
class Child2:public Parent
{
		public:
		void land()//abstraction implement
		{
			cout<<"\n Hotel";
		}
};
int main()
{
	Child1 c1=Child1();
	Child2 c2=Child2();
	
	c1.land();
	c2.land();
	return 0;
}