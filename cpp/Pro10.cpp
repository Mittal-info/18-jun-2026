#include<iostream>
using namespace std;
class student
{
  //data member
  int id;
  string name;
  
  public:
    
	student(int idvalue,string namevalue)
	{
		id = idvalue;
		name = namevalue;	
	}
	
	void display()
	{
		cout<<"\n id:"<<id;
		cout<<"\n name:"<<name;
	}	
};

int main()
{
	student obj=student(101,"Mittal");
	obj.display();
	
	return 0;
}