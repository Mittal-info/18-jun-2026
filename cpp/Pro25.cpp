#include<iostream>
using namespace std;
class RBI
{
	public:
		 virtual void roi()=0;
};
class SBI:public RBI
{
	public:
		  void roi()
		  {
		  	cout<<"SBI : 5.2"<<endl;
		  }
	
};
class BOI:public RBI
{
	public:
		  void roi()
		  {
		  	cout<<"BOI : 7.3"<<endl;
		  }
	
};
int main()
{
	SBI S1 = SBI();
	BOI B1 = BOI();
	S1.roi();
	B1.roi();
	return 0;
}