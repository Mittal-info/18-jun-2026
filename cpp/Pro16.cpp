#include<iostream>
using namespace std;
class A
{
   public:
     int a,b;
	 
	 void inputA()
	 { 
	 
	   cout<<"Enter number 1:"<<endl;
	   cin>>a;
	   cout<<"Enter number 2:"<<endl;
	   cin>>b;
	 	
     }	
};
class B
{
	public:
     int c,d;
	 
	 void inputB()
	 { 
	 
	   cout<<"Enter number 3:"<<endl;
	   cin>>c;
	   cout<<"Enter number 4:"<<endl;
	   cin>>d;
	 	
     }	
};
class C:public A,public B
{
	public:
		void display()
		{
		    cout<<"Addtion :"<<a+b<<endl;
			cout<<"Multiplication :"<<c*d<<endl;	
		}
		
		/*void addition()
		{
			cout<<"Addtion :"<<a+b<<endl;
		}
		
		void mul()
		{
			cout<<"Multiplication :"<<c*d<<endl;
		}*/
};
int main()
{
	C c = C();
	c.inputA();
	c.inputB();
	//c.addition();
	//c.mul();
	 c.display();
	
	return 0;
}