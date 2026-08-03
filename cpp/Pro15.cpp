//Multi level inheritance
#include<iostream>
using namespace std;
class A
 { 
    public:
    	
    	int a,b;
    	 void input()
    	{
		 
    	cout<<"Enter A:";
    	cin>>a;
    	cout<<"Enter B:";
    	cin>>b;
    	}
		 
 	
 };
 
 class B:public A
 {
 	 public:
 	 	int ans;
 	 	void Addition()
 	 	
 	 	{
 	 		ans = a+b;
		}
     	
 };
 class C:public B
 {
 	public:
 		void display()
 		{
 			cout<<"Addition :"<<ans;
		 }
 	
};
int main()
{
	C c=C();
	c.input();
	c.Addition();
	c.display();
	return 0;
}