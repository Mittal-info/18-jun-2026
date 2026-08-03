#include<iostream>
using namespace std;
class student
{
	
	public:
		student()//constructor
		{
			cout<<"\n welcome students";
		}
		~student()//constructor
		{
			cout<<"\n Exit students";
		}
};
int main()
{
		student obj=student();
	
	return 0;
}