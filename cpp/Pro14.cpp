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
 	 	void display()
 	 	
 	 	{
 	 		cout<<"Ans : "<<a+b;
		  }
     	
 };
int main()
{
	B obj=B();
	obj.input();
	obj.display();
	return 0;
}	