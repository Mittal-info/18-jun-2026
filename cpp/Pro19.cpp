#include<iostream>
using namespace std;
class Student
{
	public:
		void signup(string contactno)
		{
			cout<<"Register using contact number"<<endl;
		}
	public:
		void signup(string username,string password)
		{
			
			cout<<"Register using username"<<endl;
			
		}
		
	
};
int main()
{
	Student s1 = Student();
	s1.signup("9510737082");
	s1.signup("M@1234","13345");
	
	return 0;
}