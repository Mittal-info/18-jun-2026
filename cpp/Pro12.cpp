#include<iostream>
using namespace std;
class Student
{ 
    int id;
    string name;
    
    public:
    	void setId(int id)
    	{
    		this->id = id;
		}
		int getId()
		{
			return id;
		}
		void setName(string name)
		{
			this->name=name;
		}
		string getName()
		{
			return name;
		}
	
};
int main()
{
	Student std = Student();
	std.setId(101);
	cout<<std.getId()<<endl;
	//Student std = Student();
	std.setName("Mittal");
	cout<<std.getName();
	
	
	return 0;
}