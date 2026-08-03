#include<iostream>
using namespace std;

class student
{
	
	public:
		student()//constructor
		{
			cout<<"\n welcome students";
		}
		void intro()
		{
			cout<<"\n welcome students";
		}
};
int main()
{
	student obj=student();
	//obj.intro();
	
	return 0;
}