//constructor overloading
#include<iostream>
using namespace std;
class Sample
{
	public:
		Sample()
		{
			cout<<"this is constructor"<<endl;
		}
	    Sample(int a)
	    {
	    	cout<<a<<endl;
		}
		
		Sample(int a,int b)
		{
			cout<<a+b;
		}
};
int main()
{
	Sample obj1 = Sample();
	Sample obj2 = Sample(10);
	Sample obj3 = Sample(10,20);
	return 0;
}