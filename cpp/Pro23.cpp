//without abstraction
#include<iostream>
using namespace std;
class Parent
{
	public:
		void home()
		{
			cout<<"\n Home given by parent";
		}
};
class Child1:public Parent
{
	
};
class Child2:public Parent
{
	
};
int main()
{
	Child1 c1=Child1();
	Child2 c2=Child2();
	
	c1.home();
	c2.home();
	return 0;
}